@class UILabel, UIImageView, UIView;
@protocol AWEECOMIMTextFoldTipViewDelegate;

@interface AWEECOMIMTextFoldTipView : UIControl

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (weak, nonatomic) id<AWEECOMIMTextFoldTipViewDelegate> delegate;

+ (double)textFoldTipHeight;
+ (double)textFoldTipWidth;

- (id)createImageWithMaskLayerColors:(id)a0;
- (void)flodOrShowFullText;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
