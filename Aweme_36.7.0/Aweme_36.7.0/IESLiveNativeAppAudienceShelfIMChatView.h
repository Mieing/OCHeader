@class UIImageView, IESLiveNativeAppAudienceShelfIMChatViewModel, UILabel, UIView, UIButton;

@interface IESLiveNativeAppAudienceShelfIMChatView : UIView

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) UIImageView *identiImage;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) IESLiveNativeAppAudienceShelfIMChatViewModel *viewModel;

- (void)enterButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)setUpUI;

@end
