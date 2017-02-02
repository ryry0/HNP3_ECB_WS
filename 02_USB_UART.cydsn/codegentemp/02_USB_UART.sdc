# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\LLGD\3LLWork\0PrjSyn\PSOC\HNP3_ECB_WS\02_USB_UART.cydsn\02_USB_UART.cyprj
# Date: Wed, 01 Feb 2017 23:39:13 GMT
#set_units -time ns
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyBUS_CLK(fixed-function)} -period 41.666666666666664 -waveform {0 20.8333333333333} [get_pins {ClockBlock/clk_bus_glb_ff}]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 241 481} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2401 4801} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_clock -name {CyScBoostClk} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/aclk_glb_0}]]


# Component constraints for D:\LLGD\3LLWork\0PrjSyn\PSOC\HNP3_ECB_WS\02_USB_UART.cydsn\TopDesign\TopDesign.cysch
# Project: D:\LLGD\3LLWork\0PrjSyn\PSOC\HNP3_ECB_WS\02_USB_UART.cydsn\02_USB_UART.cyprj
# Date: Wed, 01 Feb 2017 23:39:02 GMT