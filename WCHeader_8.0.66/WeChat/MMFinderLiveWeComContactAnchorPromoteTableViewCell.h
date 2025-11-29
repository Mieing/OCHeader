@class MMFinderLiveWeComContactAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveWeComContactAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *companyLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMFinderLiveWeComContactAnchorPromoteInfo *weComContactPromoteInfo;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutCompanyLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
