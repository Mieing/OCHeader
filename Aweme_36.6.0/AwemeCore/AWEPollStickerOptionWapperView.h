@class UITextView, NSString, UIButton, UIView, CALayer, ACCPollStickerOptionView;
@protocol AWEPollStickerOptionWapperViewDelegate;

@interface AWEPollStickerOptionWapperView : UIView

@property (copy, nonatomic) NSString *placeHolder;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) BOOL hasAddShadow;
@property (retain, nonatomic) UIView *optionBGView;
@property (retain, nonatomic) UITextView *optionEditView;
@property (retain, nonatomic) CALayer *optionShadowLayer;
@property (retain, nonatomic) ACCPollStickerOptionView *optionDisplayView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (weak, nonatomic) id<AWEPollStickerOptionWapperViewDelegate> delegate;

- (void)updateOptionEditViewConstraints;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 constrainedToHeight:(double)a1 font:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeHolder:(id)a1;
- (void)showDisplayMode:(BOOL)a0;
- (void)addShadowToView:(id)a0 shadowLayer:(id)a1 withOpacity:(double)a2 shadowRadius:(double)a3 andCornerRadius:(double)a4;
- (void)actionDeleteButton;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
