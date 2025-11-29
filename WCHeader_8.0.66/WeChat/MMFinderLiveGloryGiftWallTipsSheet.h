@class UIImageView, MMUILabel, UIView;

@interface MMFinderLiveGloryGiftWallTipsSheet : MMPageSheetBaseView

@property (retain, nonatomic) UIView *gloryLine;
@property (retain, nonatomic) MMUILabel *gloryTitleLabel;
@property (retain, nonatomic) MMUILabel *gloryDetailLabel;
@property (retain, nonatomic) UIImageView *gloryIntroImageView;
@property (retain, nonatomic) UIView *giftWallLine;
@property (retain, nonatomic) MMUILabel *giftWallTitleLabel;
@property (retain, nonatomic) MMUILabel *giftWallDetailLabel;
@property (retain, nonatomic) UIImageView *giftWallIntroImageView;

- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void).cxx_destruct;

@end
