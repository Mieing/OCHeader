@class NSString, UIColor, BTRecommendFinderData;

@interface BTFinderItemViewModel : MMObject

@property (retain, nonatomic) BTRecommendFinderData *recommendFinderData;
@property (nonatomic) double cacheViewHeight;
@property (nonatomic) double cacheReaderStyleCoverContainerViewHeight;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *headImageUrl;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *createTimeText;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *timeText;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UIColor *coverBottomMainColor;
@property (retain, nonatomic) NSString *fromSessiongId;
@property (nonatomic) unsigned int showRedPacketFlag;
@property (nonatomic) BOOL isTitleUp;

+ (id)cellIdentifier;

- (id)initWithBTRecommendFinderData:(id)a0;
- (BOOL)isViewHidden;
- (double)viewHeight;
- (BOOL)canShowTagView;
- (BOOL)isMembershipItem;
- (double)headerContainerViewHeight;
- (double)headImageViewHeight;
- (double)headImageViewTopMargin;
- (double)coverContainerViewHeight;
- (double)coverImageViewHeight;
- (double)titleLabelLeftMargin;
- (double)titleLabelTopMargin;
- (double)titleLabelBottomMargin;
- (double)readerStyleCoverContainerViewHeight;
- (double)digestLabelHeight;
- (double)titleMaxWidth;
- (id)titleLabelFont;
- (double)titleLabelLineNumber;
- (id)titleLabelColor;
- (double)titleLabelLineSpacing;
- (id)digestLabelColor;
- (double)digestTopMargin;
- (double)timeLabelBottomMargin;
- (BOOL)shouldShowCoverBackgroundEffect;
- (id)logStr:(BOOL)a0;
- (id)cellIdentifier;
- (id)finderExportId;
- (id)finderNegativeFeedbackInfo;
- (id)finderFeedbackWordings;
- (BOOL)isTitleUpNewStyle;
- (void).cxx_destruct;

@end
