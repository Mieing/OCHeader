@class UIImageView, UILabel, ACCAnimatedButton;

@interface ACCAIGCManagerLoraEmptyView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *tipMainLabel;
@property (retain, nonatomic) UILabel *tipSubLabel;
@property (retain, nonatomic) ACCAnimatedButton *addNewLoraButton;
@property (nonatomic) long long darkMode;

- (void)addCreateLoraInfo:(id)a0 sel:(SEL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
