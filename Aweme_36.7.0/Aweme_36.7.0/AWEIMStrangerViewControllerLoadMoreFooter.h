@class NSAttributedString, NSString, UILabel, UIView, YYLabel;
@protocol IESIMLoadingViewProtocol, AWEIMStrangerViewControllerLoadMoreFooterProtocol;

@interface AWEIMStrangerViewControllerLoadMoreFooter : MJRefreshBackFooter

@property (retain, nonatomic) YYLabel *tipLabel;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *innerLabel;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showNoMoreDataText;
@property (copy, nonatomic) NSString *noMoreDataString;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedString;
@property (weak, nonatomic) id<AWEIMStrangerViewControllerLoadMoreFooterProtocol> delegate;
@property (nonatomic) double adaptiveBitFontMode;
@property (nonatomic) double widthInBigFontMode;
@property (nonatomic) BOOL hasTrashConversations;
@property (nonatomic) BOOL hasCommonConversations;
@property (nonatomic) BOOL hiddenBottomTrashTip;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (id)getInnerLabel;
- (void)refreshFooter;
- (void)didClickHighLightText;
- (void)configCommonAttributeText:(id)a0;
- (void)showTipLabelOrNot;
- (void)applicationWillEnterForeground:(id)a0;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;
- (void)refreshState:(id)a0;

@end
