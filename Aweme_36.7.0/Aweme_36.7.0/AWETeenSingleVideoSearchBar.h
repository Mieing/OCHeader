@class UIImageView, UILabel;

@interface AWETeenSingleVideoSearchBar : UIControl

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *content;
@property (nonatomic) long long style;

- (void)updateSugWord:(id)a0;
- (void)renderUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
