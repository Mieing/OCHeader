@class MMUILabel, MMPaddingView, MMWebImageView, ZZLabelChainModel, MMFinderLiveNoticeAnchorPromoteInfo;

@interface MMFinderLiveNoticeAnchorPromoteTableViewCell : MMFinderLiveAnchorPromoteTableViewCell

@property (retain, nonatomic) MMWebImageView *titleImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *introLabel;
@property (retain, nonatomic) MMFinderLiveNoticeAnchorPromoteInfo *noticePromoteInfo;
@property (retain, nonatomic) MMPaddingView *couponsTitleLabel;
@property (retain, nonatomic) ZZLabelChainModel *couponsStateModel;

+ (id)identifier;

- (void)layoutUI;
- (void)updatePromoteInfo:(id)a0;
- (id)promoteInfo;
- (BOOL)enableMenuAction;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutIntroLabel;
- (void)layoutCouponView;
- (void)updateLabelsOriginY;
- (void).cxx_destruct;

@end
