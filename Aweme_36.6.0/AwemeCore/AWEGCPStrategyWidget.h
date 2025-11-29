@class NSString;

@interface AWEGCPStrategyWidget : IESGCPBaseWidget <AWEGCPStrategyService>

@property (nonatomic) BOOL liveMutedBeforeEnterFeed;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterInnerFeed;
- (void)didOutInnerFeed;
- (void)openStrategyDetailViewControllerWith:(id)a0;
- (void)widgetBindService;
- (void)openViewController:(id)a0;
- (void)dealloc;

@end
