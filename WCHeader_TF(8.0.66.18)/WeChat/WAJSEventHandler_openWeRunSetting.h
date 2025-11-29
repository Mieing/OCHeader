@interface WAJSEventHandler_openWeRunSetting : WAJSEventHandler_BaseEvent {
    BOOL _bIsNotCheckDeviceNotSupport;
}

- (void)handleJSEvent:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)tryOpenSetting;

@end
