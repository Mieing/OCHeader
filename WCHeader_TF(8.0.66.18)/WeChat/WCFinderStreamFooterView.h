@class WCFinderAnimationLoadingView, NSString, WCFinderNoMoreView, UIButton, UILabel, RichTextView, UITapGestureRecognizer;
@protocol WCFinderStreamFooterViewActionDelegate;

@interface WCFinderStreamFooterView : UICollectionReusableView <WCFinderStreamLoadingStateDelegate, ILinkEventExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) WCFinderNoMoreView *noMoreView;
@property (retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) RichTextView *stateTipsLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *recEndViewLabel;
@property (retain, nonatomic) UIButton *recEndViewBtn;
@property (nonatomic) double triggerHeight;
@property (copy, nonatomic) NSString *normalText;
@property (weak, nonatomic) id<WCFinderStreamFooterViewActionDelegate> delegate;
@property (nonatomic) BOOL displayCircleLoadingView;
@property (nonatomic) double elementPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getFooterViewHeight;
+ (double)displayHeightForEmpty:(BOOL)a0;

- (void)onLoadingStateChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)isLoading;
- (void)updateElement:(id)a0 expectPosition:(double)a1;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)setTipsColor:(id)a0;
- (void)onStateOfLoading;
- (void)displayLoadingView;
- (void)hiddenLoadingView;
- (void)onStateOfEmpty:(id)a0;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfBlank;
- (void)onStateOfNoMoreWithBottomTips:(id)a0;
- (void)onStateOfNoMoreData:(id)a0 enableClick:(BOOL)a1;
- (void)onStateOfNoMoreDataWithTips:(id)a0;
- (void)onStateOfNoMoreDataWithConfig:(id)a0;
- (void)onStateOfError:(id)a0;
- (void)updateWithConfig:(id)a0;
- (void)_setupText:(id)a0;
- (unsigned long long)flowViewState;
- (void)onClickRefresh;
- (void)clickNoMoreDataNavToRecBtn;
- (void)onForceSetTipsTop:(double)a0;
- (void)refreshScrollViewDidScroll:(id)a0;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void)setNoMoreLogoIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setLogoIconOnly:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)makeNoMoreViewCenter;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
