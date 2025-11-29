@class AWEIMLinkPreviewDataController, UILabel, UIImageView, AWEIMMessageViewModel, UIView, AWEIMRefreshImageView;
@protocol IESIMGradientViewProtocol;

@interface IESIMLinkVideoCoverView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) AWEIMMessageViewModel *viewModel;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *bottomMaskView;
@property (weak, nonatomic) AWEIMLinkPreviewDataController *dataController;
@property (retain, nonatomic) AWEIMRefreshImageView *cardAvatarImageView;
@property (retain, nonatomic) UILabel *nickLabel;

- (void)p_setupView;
- (void)p_requestUrlInfo;
- (void)configWithViewModel:(id)a0 dataController:(id)a1;
- (void)p_updateNickName:(id)a0 avatarURL:(id)a1;
- (void)p_configImageWithUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
