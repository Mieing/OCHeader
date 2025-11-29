@class DUXTextTag, UIImageView, AWEPickPanelUserCellViewModel, UIView, UILabel;

@interface AWEPickPanelUserCell : UICollectionViewCell

@property (retain, nonatomic) AWEPickPanelUserCellViewModel *viewModel;
@property (retain, nonatomic) UIView *animationBgView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) DUXTextTag *relationTag;
@property (retain, nonatomic) UILabel *timeStampLabel;

+ (double)avatarWH;

- (void)configCell:(id)a0;
- (void)onEnterProfileViewTapped:(id)a0;
- (void)playHighLightAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
