@class UIImageView, UILabel;

@interface ACCTextReaderToastView : UIView

@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_setupUILight;
- (void)p_setupUIDark;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)updateTitle:(id)a0;

@end
