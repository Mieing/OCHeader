@interface AWELiveRelatedRecommendPanelManager : NSObject

@property (class, nonatomic, readonly) AWELiveRelatedRecommendPanelManager *sharedInstance;

@property (nonatomic, weak) void /* function */ delegate;

- (BOOL)isShowingLiveRelatedPanelView;
- (void).cxx_destruct;
- (id)init;

@end
