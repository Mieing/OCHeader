@class UILabel, UIImageView;

@interface IESECWinConfigStateView : UIStackView

@property (retain, nonatomic) UILabel *textView;
@property (retain, nonatomic) UILabel *subTextView;
@property (retain, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
