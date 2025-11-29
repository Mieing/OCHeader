@class MMFinderLiveShopAdAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveShopAdAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleTagLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMFinderLiveShopAdAnchorPromoteInfo *adPromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
