@interface IESECLiveGoodsListDataABUtil : NSObject

+ (BOOL)apiModelInThread;
+ (BOOL)avoidRereateViewModelsWhenRefresh;
+ (BOOL)avoidPrefetchWhenGoodsListViewShowed;
+ (BOOL)useNewPageControl;
+ (BOOL)usePerformUpdateWhenPopSwitch;
+ (BOOL)usePerformUpdateWhenCampainDone;
+ (BOOL)useAnchorWhenReload;
+ (BOOL)loadMoreUseDiff;
+ (BOOL)enabled;

@end
