@interface AWEFeedAlbumCommonController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedMuteGuideProtocol> {
    void /* unknown type, empty encoding */ canShowMuteGuide;
}

- (void)onDataSourceReload;
- (void)onAwemeDeletedWithModel:(id)a0 isLiveFinish:(BOOL)a1 isDislike:(BOOL)a2 index:(unsigned long long)a3 isLiveEnded:(BOOL)a4;
- (void)containerDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willPerformInitialFetchCompletionBlock:(id)a0 error:(id)a1 isRetry:(BOOL)a2 remainingRetryCount:(BOOL)a3;
- (BOOL)canShowMuteGuideButton;
- (id)init;

@end
