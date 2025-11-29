@class NSString;

@interface IESGCPLiveAudienceDetailLifeCycleServiceImpl : NSObject <IESGCPLiveAudienceDetailLifeCycleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didOpenGameAudienceDetail:(id)a0 isOpenAsFullScreen:(BOOL)a1;
- (void)gameAudienceDetail:(id)a0 fullScreenDidChange:(BOOL)a1;
- (void)gameAudienceDetailDidAppear:(id)a0 isFullScreen:(BOOL)a1;
- (void)gameAudienceDetailDidDisappear:(id)a0 isFullScreen:(BOOL)a1;
- (void)didCloseGameAudienceDetail:(id)a0;
- (void)willOpenGameAudienceDetail:(id)a0 contentView:(id)a1;
- (void)willCloseGameAudienceDetail:(id)a0;
- (void)gameAudienceDetailWillDisappear:(id)a0;
- (BOOL)enableLiveDurationContinueWhenEnterGameDetail;

@end
