@interface AWEIMMessageText_AudioStream_Plugin : AWEIMFlexComponent <AWEIMMessageTextPluginProtocol> {
    void /* unknown type, empty encoding */ isEnterFromReport;
    void /* unknown type, empty encoding */ audioPlayed;
    void /* unknown type, empty encoding */ conHistoryLastMsgIndex;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)multiSelectUpdateIsEditMode:(BOOL)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (id)init;

@end
