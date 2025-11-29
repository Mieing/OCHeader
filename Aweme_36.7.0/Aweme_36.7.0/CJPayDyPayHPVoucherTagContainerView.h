@class UIStackView, UIScrollView, UIView, NSMutableArray;

@interface CJPayDyPayHPVoucherTagContainerView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackContentView;
@property (retain, nonatomic) UIView *moreGradientView;
@property (retain, nonatomic) NSMutableArray *currentShowTagViews;
@property (retain, nonatomic) NSMutableArray *lastShowTagViews;
@property (nonatomic) BOOL cancelWindowAnimate;
@property (copy, nonatomic) id /* block */ showTagAnimationBlock;

- (void)updateWithVoucherMsgList:(id)a0;
- (void)p_animateTagViews;
- (void)updateWithVoucherShowInfoModel:(id)a0;
- (BOOL)isShowVoucherTags;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
