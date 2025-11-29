@class AWEIMFansGroupTypeBottomTagView, NSString, UIImageView, UILabel, AWEIMFansGroupMasterItemViewModel, UIButton;
@protocol AWEIMFansGroupMasterStateCellDelegate, AWEIMSwipeCollectionViewCellDelegate;

@interface AWEIMFansGroupMasterStateCell : AWEIMSwipeCollectionViewCell <UIGestureRecognizerDelegate, AWEIMPublicGroupReusableViewLifeCycle>

@property (retain, nonatomic) UIButton *groupStateButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarBottomTagImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *memberCountLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *swipeImageView;
@property (retain, nonatomic) AWEIMFansGroupTypeBottomTagView *avatarBottomTagView;
@property (weak, nonatomic) id<AWEIMFansGroupMasterStateCellDelegate, AWEIMSwipeCollectionViewCellDelegate> delegate;
@property (weak, nonatomic) AWEIMFansGroupMasterItemViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)handleThemeChangeNotification;
- (void)__setupUI;
- (void)__layoutContentLabels;
- (void)__updateGroupStateButtonUI;
- (void)__updateSwipeImageViewVisibleState;
- (void)__swipeImageViewPanGes:(id)a0;
- (void)__groupStateButtonAction:(id)a0;
- (void)reusableViewWillDisplayAtIndexPath:(id)a0;
- (void)reusableViewDidEndDisplayWithIndexPath:(id)a0;
- (id)swipeCollectionViewCelldelegate;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
