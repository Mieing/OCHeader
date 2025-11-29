@class MMUILabel, CAShapeLayer, UIView, UIButton;
@protocol MMHalfScreenGuideViewDelegate;

@interface MMHalfScreenGuideView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *customizedTopView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *messageLabel;
@property (retain, nonatomic) UIView *customizedContentView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (weak, nonatomic) id<MMHalfScreenGuideViewDelegate> delegate;
@property (nonatomic) BOOL dismissesWhenCancelButtonClicked;
@property (nonatomic) BOOL dismissesWhenAcceptButtonClicked;
@property (copy, nonatomic) id /* block */ cancelButtonDidClickBlock;
@property (copy, nonatomic) id /* block */ acceptButtonDidClickBlock;
@property (nonatomic) double contentPaddingX;
@property (nonatomic) double contentPaddingTop;
@property (nonatomic) double contentPaddingBottom;
@property (nonatomic) double titleLabelMarginTopFollowedCustomizedTopView;
@property (nonatomic) double labelSpacingY;
@property (nonatomic) double customizedContentMarginTop;
@property (nonatomic) double buttonSpacingX;
@property (nonatomic) double buttonMarginTopFollowedLabel;
@property (nonatomic) double buttonMarginTopFollowedCustomizedContent;

- (id)init;
- (id)attributedTextForMessage:(id)a0 alignment:(long long)a1;
- (id)createCancelButton;
- (id)createAcceptButton;
- (void)layoutSubviews;
- (void)layoutCustomizedTopView;
- (void)layoutCustomizedContentView;
- (void)updateContentShape;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1;
- (void)cancelButtonDidClick:(id)a0;
- (void)acceptButtonDidClick:(id)a0;
- (void).cxx_destruct;

@end
