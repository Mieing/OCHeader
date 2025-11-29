@class ACCAIGCLoraProfileModel, UIImageView, UILabel, UIView;
@protocol AWERecorderLoraSuiteCardHeaderDelegate;

@interface AWERecorderLoraSuiteCardHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *contentView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *nextView;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (weak, nonatomic) id<AWERecorderLoraSuiteCardHeaderDelegate> delegate;

- (void)onCreateClicked;
- (void)updateAvatarView:(BOOL)a0;
- (void)addSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
