@class UIImageView, UILabel, UIView, ACCAIGCRecordModel;
@protocol ACCAIGCRecordListCollectionViewCellDetegate;

@interface ACCAIGCRecordListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *cellView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIView *cellMaskView;
@property (retain, nonatomic) UIImageView *maskIcon;
@property (retain, nonatomic) UIImageView *unreadRedPoint;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) UIImageView *redPoint;
@property (retain, nonatomic) UIView *unReadView;
@property (retain, nonatomic) UILabel *unReadLabel;
@property (retain, nonatomic) ACCAIGCRecordModel *model;
@property (weak, nonatomic) id<ACCAIGCRecordListCollectionViewCellDetegate> delegate;
@property (nonatomic) BOOL isFromInspiration;

+ (id)identifier;

- (void)updateUIWithModel:(id)a0;
- (void)updateWithSelected:(BOOL)a0;
- (BOOL)shouldUseAICreationUIStyle;
- (BOOL)shouldUseLightModeUI;
- (BOOL)isUnread:(id)a0;
- (void)updatebadgeView;
- (id)createTimeString:(long long)a0;
- (void)updateWithEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)selectedAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
