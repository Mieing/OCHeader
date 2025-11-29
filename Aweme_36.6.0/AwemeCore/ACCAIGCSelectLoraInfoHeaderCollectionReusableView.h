@class UILabel, ACCAnimatedButton;

@interface ACCAIGCSelectLoraInfoHeaderCollectionReusableView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (nonatomic) long long darkMode;

- (void)addCloseButtonTarget:(id)a0 sel:(SEL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
