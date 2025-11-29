@class MMFinderLiveLisTenAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveListenAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMFinderLiveLisTenAnchorPromoteInfo *listenPromoteInfo;

+ (id)identifier;

- (BOOL)enableMenuAction;
- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
