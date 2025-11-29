@class AWEAwemeModel, NSString, AWEGrouponLifeFeedsCoverBottomInfo, AWEGrouponLifeFeedsUserInfo, AWEGrouponLifeFeedsCoverTopInfo, AWENearbyLifeDualAnchorInfo, AWEURLModel, NSDictionary, AWEGrouponLifeFeedsSaleInfo, AWEGrouponLifeFeedsRecommendReason, NSArray;

@interface AWEGrouponLifeFeedsLiveComponentVM : AWEGrouponLifeFeedsBaseComponentVM

@property (nonatomic) double calculatedHeight;
@property (nonatomic) long long uiStyle;
@property (nonatomic) long long linesNum;
@property (nonatomic) BOOL didTrackLiveShow;
@property (retain, nonatomic) NSDictionary *lazyParseData;
@property (retain, nonatomic) AWEURLModel *imageCover;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverBottomInfo *coverBottomInfo;
@property (retain, nonatomic) NSString *titleContent;
@property (retain, nonatomic) NSString *tagInfoContent;
@property (retain, nonatomic) AWEGrouponLifeFeedsUserInfo *userInfo;
@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *titleContentInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsRecommendReason *recommendReason;
@property (retain, nonatomic) NSDictionary *saleContentInfo;
@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *rightContentInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsSaleInfo *saleInfo;
@property (nonatomic) double titleHeight;
@property (nonatomic) double singleLineHeight;
@property (nonatomic) double recommendReasonHeight;
@property (nonatomic) double priceInfoHeight;
@property (nonatomic) double heightWidthRatio;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL canPlay;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long titleLimitLine;
@property (retain, nonatomic) NSDictionary *controlInfo;
@property (retain, nonatomic) NSString *homepageProductId;
@property (retain, nonatomic) NSArray *attachmentsToLoad;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL simpleTruncation;

+ (double)cardPadding;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)componentStartShow:(unsigned long long)a0;
- (void)componentDidEndShow:(unsigned long long)a0;
- (id)buildTitleAttributedString;
- (id)parseUIDataDic:(id)a0;
- (BOOL)isNewStyleWithUiStyle:(long long)a0;
- (BOOL)isSimpleTruncationWithLengthTruncation:(long long)a0;
- (void)lazyParseDataIfNeeded;
- (struct CGSize { double x0; double x1; })sizeForNewStyleWithMaxWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForOldStyleWithMaxWidth:(double)a0;
- (double)calculateTitleHeightForNewStyleWithMaxWidth:(double)a0;
- (double)calculateRecommendReasonHeightForNewStyleWithMaxWidth:(double)a0;
- (double)calculatePriceInfoHeight;
- (double)calculateTitleHeightWithMaxWidth:(double)a0;
- (double)calculateSingleLineHeightForAttributedString:(id)a0;
- (double)calculateRecommendReasonHeightWithMaxWidth:(double)a0;
- (id)buildRecommendReasonAttributedString;
- (id)spacerWithWidth:(double)a0;
- (void)tryTrackLiveSdkLiveShow;
- (id)liveCommonParamsWithAweme:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
