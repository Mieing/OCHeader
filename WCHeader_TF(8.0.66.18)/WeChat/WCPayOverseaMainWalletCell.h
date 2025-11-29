@class UIView, UILabel, MMWebImageView, WCPayOverseaPayFunctionObject;

@interface WCPayOverseaMainWalletCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *m_iconView;
@property (retain, nonatomic) MMWebImageView *m_foregroundIconView;
@property (retain, nonatomic) UILabel *m_nameLabel;
@property (retain, nonatomic) WCPayOverseaPayFunctionObject *m_data;
@property (retain, nonatomic) UIView *m_wLine;
@property (retain, nonatomic) UIView *m_hLine;
@property (nonatomic) BOOL showNew;
@property (nonatomic) BOOL rightTopNew;
@property int radius;
@property BOOL hasHLine;
@property (retain, nonatomic) UILabel *m_subtitleLabel;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateIconView;
- (void)updateForegroundIconView;
- (void)updateNameLabel;
- (void)updateSubtitleLabel;
- (void)updateLine;
- (void)setHighlighted:(BOOL)a0;
- (void)updateCellData:(id)a0 showNew:(BOOL)a1 radius:(int)a2 hLine:(BOOL)a3;
- (void)updateCellData:(id)a0 showNew:(BOOL)a1 radius:(int)a2 hLine:(BOOL)a3 rightTopNew:(BOOL)a4;
- (id)contentAccessbilityLabel;
- (void).cxx_destruct;

@end
