@class UIImageView, UILabel, NSString;

@interface WCFinderRedPacketThumbCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *cardImgView;
@property (retain, nonatomic) UILabel *cardDesc;
@property (copy, nonatomic) NSString *currentLoadUrl;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithRedPacket:(id)a0;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
