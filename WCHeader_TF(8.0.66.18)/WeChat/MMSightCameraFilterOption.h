@class MMUIButton, NSArray, MMLiveResourceFetcherFanoutFlowAction, NSString, NSMutableArray, WCElasticLayoutView;
@protocol MMSightCameraFilterOptionDelegate;

@interface MMSightCameraFilterOption : NSObject <MMSightCameraOptionProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (retain, nonatomic) WCElasticLayoutView *elasticLayoutView;
@property (retain, nonatomic) MMUIButton *btnFilterIcon;
@property (retain, nonatomic) NSMutableArray *filterBtnArray;
@property (retain, nonatomic) NSArray *filterInfos;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher;
@property (weak, nonatomic) id<MMSightCameraFilterOptionDelegate> delegate;
@property (readonly, nonatomic) WCElasticLayoutView *optionView;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateToOrientation:(long long)a0;
- (id)currentSelectedFilterItem;
- (void)_onClickIconView;
- (void)onClickFilterBtn:(id)a0;
- (void)_transformViewsToIdentityAnimated:(BOOL)a0;
- (void)_transformViewsToOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_initViews;
- (void)fetchFilterResourcesWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
