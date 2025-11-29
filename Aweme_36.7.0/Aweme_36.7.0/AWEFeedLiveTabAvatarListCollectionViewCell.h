@class UIImageView, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEFeedLiveTabAvatarListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView *avatarBackView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *liveTagImageView;
@property (retain, nonatomic) UIImageView *liveRelationTagImageView;
@property (retain, nonatomic) UILabel *liveTagLabelView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (copy, nonatomic) id /* block */ avatarDidClicked;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;
+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (void)setupAvatarImageView;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)setupLiveMarkView;
- (void)setupLiveTagView;
- (void)setupNickNameLabel;
- (struct CGSize { double x0; double x1; })avatarBackViewSize;
- (void)playAvatarAnimationWithSyncStartTime:(double)a0;
- (void)avatarDidClickedAction;
- (void)stopAvatarAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
