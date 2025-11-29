@class AWEAwemeModel, NSString, AWELifeFeedsCoverTopInfo, NSArray, AWENearbyLifeDualAnchorInfo, AWEURLModel, NSDictionary, AWELifeFeedsRecommendReason, AWELifeFeedsUserInfo, AWELifeFeedsCoverBottomInfo;

@interface AWELifeFeedsLiveComponentVM : AWELifeFeedsBaseComponentVM

@property (nonatomic) double height;
@property (nonatomic) long long uiStyle;
@property (nonatomic) long long linesNum;
@property (nonatomic) BOOL didTrackLiveShow;
@property (retain, nonatomic) AWEURLModel *imageCover;
@property (retain, nonatomic) AWELifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWELifeFeedsCoverBottomInfo *coverBottomInfo;
@property (retain, nonatomic) NSString *titleContent;
@property (retain, nonatomic) NSString *tagInfoContent;
@property (retain, nonatomic) AWELifeFeedsUserInfo *userInfo;
@property (nonatomic) double heightWidthRatio;
@property (nonatomic) long long titleLimitLine;
@property (nonatomic) double titleHeight;
@property (nonatomic) double reHeight;
@property (nonatomic) double priceInfoHeight;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) BOOL canPlay;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *titleContentInfo;
@property (retain, nonatomic) NSDictionary *controlInfo;
@property (retain, nonatomic) AWELifeFeedsRecommendReason *recommendReasonInfo;
@property (retain, nonatomic) NSDictionary *saleContentInfo;
@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *rightContentInfo;
@property (retain, nonatomic) NSString *homepageProductId;
@property (retain, nonatomic) NSArray *attachmentsToLoad;

+ (double)cardPadding;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)componentStartShow:(unsigned long long)a0;
- (void)componentDidEndShow:(unsigned long long)a0;
- (id)buildTitleAttributedString;
- (id)parseUIDataDic:(id)a0;
- (double)calculateTitleHeightWithMaxWidth:(double)a0;
- (double)calculateSingleLineHeightForAttributedString:(id)a0;
- (id)spacerWithWidth:(double)a0;
- (void)tryTrackLiveSdkLiveShow;
- (id)liveCommonParamsWithAweme:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
