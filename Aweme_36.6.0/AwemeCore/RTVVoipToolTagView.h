@class UILabel, UIView;

@interface RTVVoipToolTagView : UIView

@property (readonly, nonatomic) UILabel *tagLabel;
@property (readonly, nonatomic) UIView *tagBlurView;
@property (readonly, nonatomic) UILabel *titleLabel;

- (void)setupComponent;
- (void)layoutComponent;
- (void).cxx_destruct;
- (id)init;

@end
