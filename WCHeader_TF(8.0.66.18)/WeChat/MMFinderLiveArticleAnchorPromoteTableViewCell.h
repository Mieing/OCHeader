@class MMFinderLiveMpArticleAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveArticleAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *anchorLabel;
@property (retain, nonatomic) MMFinderLiveMpArticleAnchorPromoteInfo *articlePromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutAnchorLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
