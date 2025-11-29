@class UIImageView, UILabel, AWELiveAnnouncementProductInfo;

@interface AWESearchLiveAppointmentLiveCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *priceBackgroundView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) AWELiveAnnouncementProductInfo *productInfo;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
