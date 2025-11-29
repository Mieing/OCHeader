@class UIImageView, AWEIMFoldedNotificationModel, UILabel, UIView;
@protocol AWEIMDYOfficialTableViewFoldLabelCellDelegate;

@interface AWEIMDYOfficialTableViewFoldLabelCell : UITableViewCell

@property (retain, nonatomic) UIView *foldBackgroundView;
@property (retain, nonatomic) UIView *firstFakeBackgroundView;
@property (retain, nonatomic) UIView *secondFakeBackgroundView;
@property (retain, nonatomic) UIView *foldContainerView;
@property (retain, nonatomic) UILabel *foldLabel;
@property (retain, nonatomic) UIView *foldLabelBackgroundView;
@property (retain, nonatomic) UIImageView *foldArrayIconView;
@property (retain, nonatomic) AWEIMFoldedNotificationModel *foldModel;
@property (weak, nonatomic) id<AWEIMDYOfficialTableViewFoldLabelCellDelegate> delegate;

+ (id)identifier;

- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)__setupFoldLabel;
- (void)__layoutFoldContainer;
- (void)onTapFoldLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
