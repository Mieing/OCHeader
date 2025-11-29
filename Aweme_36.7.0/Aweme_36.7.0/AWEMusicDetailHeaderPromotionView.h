@class AWEMusicDetailHeaderDataHelper, UIImageView, AWEMusicDetailPromotionModel, UILabel, UIView;

@interface AWEMusicDetailHeaderPromotionView : UIView

@property (retain, nonatomic) UIImageView *promotionIcon;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailPromotionModel *promotionModel;

- (void)weakBindDataHelper:(id)a0;
- (void)p_trackPromoteTickerClickFormClickArea:(id)a0;
- (void)p_didClickPromotionView;
- (void)p_didClickPromotionIconView;
- (void)p_didClickPromotionDescribetionView;
- (void)updateContentWithPromotionModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
