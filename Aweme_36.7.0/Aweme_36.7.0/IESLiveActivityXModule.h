@class NSString;

@interface IESLiveActivityXModule : IESLiveModule <IESLiveActivityXModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortTouchInterface;
- (id)configShortTouchInterface;
- (id)taskBannerInterface;
- (id)topLeftBannerInterface;
- (id)indicatorInterface;
- (id)topRightCardInterface;
- (id)bottomRightCardInterface;
- (id)dataCenterInterface;
- (Class)activityABManager;
- (id)lotteryInterface;

@end
