@class MMUILabel, NSString, WCFinderHeadImageView, MMFinderLiveTaskId, MMFinderLiveTask, MMUIButton;

@interface MMFinderLiveFansGroupDetailNavBar : UIView <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMUIButton *navLeftButton;
@property (retain, nonatomic) MMUIButton *navRightButton;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) WCFinderHeadImageView *headerImgView;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (nonatomic) double selfWidth;
@property (copy, nonatomic) id /* block */ leftButtonActionCallback;
@property (copy, nonatomic) id /* block */ rightButtonActionCallback;
@property (copy, nonatomic) id /* block */ gotoFansGroupMemListCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeight;
+ (double)getTitleContentWidth:(id)a0;

- (id)initWithTaskId:(id)a0;
- (BOOL)shouldAdaptToDarkLight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateTitleWidgesOrigin;
- (void)layoutTitleView;
- (void)layoutHeaderImgView;
- (void)layoutArrowButton;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)updateUI;
- (id)getHeaderImgView;
- (id)getArrowButton;
- (id)getCurrentTitleView;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)onArrowButtonAction;
- (void)onTitleTap;
- (id)getAdapatedDisplayTitle;
- (double)getTitleMaxDisplayWidth;
- (double)getTitleSuffixWidth;
- (id)getAdaptedDisplayAnchorNameInMaxWidth:(double)a0;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void).cxx_destruct;

@end
