@class UILabel, UIImageView;

@interface AWEModernFeedAiToTextView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *AiIconImage;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (nonatomic, getter=isButtonStyle) BOOL buttonStyle;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithTitle:(id)a0;

@end
