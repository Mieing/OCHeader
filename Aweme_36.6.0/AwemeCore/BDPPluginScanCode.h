@interface BDPPluginScanCode : BDPBridgeInstancePlugin {
    BOOL _isScanningCode;
}

- (void)scanCodeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
