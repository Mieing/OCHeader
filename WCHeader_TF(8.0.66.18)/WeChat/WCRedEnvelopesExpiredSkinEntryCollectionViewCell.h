@class UIImageView, UILabel, UIView;
@protocol WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate;

@interface WCRedEnvelopesExpiredSkinEntryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *entryBackgroungView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *entryArea;
@property (retain, nonatomic) UILabel *entryAreaLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL isSmallMode;
@property (weak, nonatomic) id<WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate> m_delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateView:(BOOL)a0;
- (void)updateBackgroundView;
- (void)onGotoExpiredSkinEntry;
- (void)onTapActivityEntry:(id)a0;
- (void)onLongActivityEntry:(id)a0;
- (void).cxx_destruct;

@end
