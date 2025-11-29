@class UIControl, MMUIActivityIndicatorView, MJVoiceItem, UIView, MMWebImageView, UILabel;
@protocol MJVoiceChangeCellDelegate;

@interface MJVoiceChangeCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIControl *deleteCloneRoleControl;
@property (weak, nonatomic) id<MJVoiceChangeCellDelegate> delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) MJVoiceItem *item;
@property (nonatomic) BOOL isCellSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupMaskViewWithLoadingStyle;
- (void)setupMaskViewWithRetryStyle;
- (void)retryButtonDidTouchUpInside;
- (void)prepareForReuse;
- (void)setupWithItem:(id)a0;
- (void)syncWithStatus;
- (void)deleteCloneRoleControlDidTap:(id)a0;
- (void).cxx_destruct;

@end
