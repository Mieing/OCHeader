@class UILabel, MMGradientView, FinderLiveAppMsgGameGuessLikeInfo;

@interface MMFinderLiveNotifyStyleGameGuessLikePubbleCell : MMFinderLiveNotifyStyleGameRecommendPubbleCell

@property (retain, nonatomic) MMGradientView *gradientView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UILabel *suffixTextLabel;
@property (retain, nonatomic) FinderLiveAppMsgGameGuessLikeInfo *gameGuessLikeInfo;

- (id)initWithCellFrame:(id)a0;
- (double)recommendReasonRightMargin;
- (float)_calculateRecommendReasonLabelMaxWidth;
- (void)layoutUI;
- (void)didMoveToWindow;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (void).cxx_destruct;

@end
