@class MMFinderLivePaidCollectionAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLivePaidCollectionAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) MMFinderLivePaidCollectionAnchorPromoteInfo *paidCollectionPromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutDescriptionLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
