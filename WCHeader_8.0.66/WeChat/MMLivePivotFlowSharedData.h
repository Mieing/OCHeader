@protocol MMLivePivotViewControllerItemsSource;

@interface MMLivePivotFlowSharedData : NSObject

@property (retain, nonatomic) id<MMLivePivotViewControllerItemsSource> itemsSource;
@property (copy, nonatomic) id /* block */ onPivotWillDisapear;
@property (copy, nonatomic) id /* block */ onPivotDidBePopedOrDismissed;
@property (nonatomic) unsigned long long interactiveDismissTransitionOptions;
@property (nonatomic) BOOL disableRelatedLive;
@property (nonatomic) int relatedListRequestScene;

- (void).cxx_destruct;

@end
