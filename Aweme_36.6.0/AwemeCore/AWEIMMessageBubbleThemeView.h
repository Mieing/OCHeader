@class UIImageView;

@interface AWEIMMessageBubbleThemeView : UIView

@property (retain, nonatomic) UIImageView *leftTopView;
@property (retain, nonatomic) UIImageView *rightTopView;
@property (retain, nonatomic) UIImageView *leftBottomView;
@property (retain, nonatomic) UIImageView *rightBottomView;

- (void)configWithModel:(id)a0 height:(double)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
