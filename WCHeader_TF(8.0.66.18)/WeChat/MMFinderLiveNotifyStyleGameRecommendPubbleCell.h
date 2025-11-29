@class UIImageView, MMLiveGameRecommendLiteAppObj, UILabel, MMWebImageView;

@interface MMFinderLiveNotifyStyleGameRecommendPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMLiveGameRecommendLiteAppObj *gameliteAppObj;

+ (double)horizontalMargin;
+ (struct CGSize { double x0; double x1; })preferSizeForCellFrame:(id)a0;
+ (double)preferDisplayDurationWithComment:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (void)layoutUI;
- (id)gameRecommendInfo;
- (id)getGameRecommendLiteAppObj;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (double)rightIconLeftMargin;
- (void)didMoveToWindow;
- (void)onTap;
- (void)runCustomEnterAnimation;
- (void).cxx_destruct;

@end
