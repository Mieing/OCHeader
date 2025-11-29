@class UIScrollView, NSMutableArray, NSString;
@protocol BrandProfileFuwuContainerViewDelegate;

@interface BrandProfileFuwuContainerView : MMUIView <BrandProfileFuwuBaseViewDelegate>

@property (retain, nonatomic) UIScrollView *fuwuScrollView;
@property (retain, nonatomic) NSMutableArray *fuwuViewList;
@property (weak, nonatomic) id<BrandProfileFuwuContainerViewDelegate> delegate;
@property (nonatomic) double maxContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setupSubviews;
- (void)setDisplayName:(id)a0;
- (void)setFuwuInfoList:(id)a0;
- (void)removeFuwuViewList;
- (void)layoutSubviews;
- (double)calcuateCancelButtonHeight;
- (void)reCreateRoundCornersLayer;
- (void)onCancelBtnClicked;
- (void)onFuwuInfoClicked:(id)a0;
- (void).cxx_destruct;

@end
