@class FinderLiveGetMoneyOffTagResponse, NSString, MMFinderLiveTaskId, MMFinderLiveInstantDiscountWidgetView;
@protocol MMFinderLiveInstantDiscountHandlerDelegate;

@interface MMFinderLiveInstantDiscountHandler : NSObject <MMFinderLiveInstantDiscountWidgetDelegate>

@property (weak, nonatomic) MMFinderLiveInstantDiscountWidgetView *widgetView;
@property (retain, nonatomic) FinderLiveGetMoneyOffTagResponse *info;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveInstantDiscountHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleInfo:(id)a0;
- (void)showWidgetWithInfo:(id)a0;
- (id)widgetContainerView;
- (void)clean;
- (void)onInstantDiscountWidgetClicked;
- (void)onInstantDiscountWidgetShouldBeReplaced;
- (void)autoOpenActivityPageIfNeeded;
- (void)openActivityPage;
- (void).cxx_destruct;

@end
