@interface _TtCC6WeChat17KaraFeatureCenter6Moment : _TtCC6WeChat17KaraFeatureCenter9Component <WCFacadeExt, WeChat.IKaraMomentExt, SessionSwitchExt> {
    void /* unknown type, empty encoding */ imageHistoryTable;
    void /* unknown type, empty encoding */ videoHistoryTable;
    void /* unknown type, empty encoding */ timelineSessionHistoryTable;
    void /* unknown type, empty encoding */ timelineSessionRecord;
    void /* unknown type, empty encoding */ _numberOfUnreadBeforeEnterTimeline;
    void /* unknown type, empty encoding */ _badgeBeforeEnterTimeline;
}

- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)userDidSeeFullScreenMoment:(id)a0 media:(id)a1 atDate:(id)a2;
- (void)momentWillBeDownloaded:(id)a0 atDate:(id)a1;
- (void)onBeginDownload:(id)a0 downloadType:(long long)a1;
- (void)onSessionEnter:(id)a0 withTime:(unsigned long long)a1;
- (void)onSessionQuit:(id)a0 withTime:(unsigned long long)a1;

@end
