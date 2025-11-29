@class WCPayWebImageView, UIImageView, MMBadgeView, UIView, CardHomePageTopCell, MMUILabel;

@interface WCMktTicketAndCertEntryCell : MMTableViewCell

@property (retain, nonatomic) WCPayWebImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *leftLabel;
@property (retain, nonatomic) MMUILabel *rightLabel;
@property (retain, nonatomic) UIImageView *rightArrowImgView;
@property (retain, nonatomic) UIView *seplineView;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) UIImageView *redDotImageView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) CardHomePageTopCell *topCellData;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateContentWithData:(id)a0 hasSepline:(BOOL)a1;
- (void).cxx_destruct;

@end
