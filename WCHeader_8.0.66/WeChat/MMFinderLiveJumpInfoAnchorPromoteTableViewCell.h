@class MMFinderLiveJumpInfoAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveJumpInfoAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleTagLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMFinderLiveJumpInfoAnchorPromoteInfo *jumpInfoPromoteInfo;

+ (id)identifier;

- (BOOL)enableMenuAction;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
