@class UIView;

@interface AWEAwemeDetailNaviBarSearchIconElement : AWEAwemeDetailNaviBarBaseSearchElement {
    UIView *_discoverEntranceView;
}

@property (nonatomic) double imageViewWidth;
@property (nonatomic) double imageViewHeight;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEBackgroundPlayAdapterClass;

- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEBackgroundPlayAdapter;
- (void)viewDidAppearForGuide;
- (BOOL)enableBigMode;
- (void)setSearchIconShow:(BOOL)a0;
- (void)hideSearchIconWithBottomBarIfNeed;
- (BOOL)enableSearchIconHiddenFix;
- (void).cxx_destruct;
- (double)viewSize;
- (void)setData:(id)a0;
- (double)rightMargin;
- (void)viewDidLoad;
- (void)setupUI;
- (void)viewDidDisappear;

@end
