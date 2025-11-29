@class AWEURLModel, NSString, AWEGrouponLifeFeedsUserInfo, AWEAwemeModel, AWEGrouponLifeFeedsCoverBottomInfo, AWEGrouponLifeFeedsCoverTopInfo;

@interface AWEGrouponLifeFeedsVideoComponentVM : AWEGrouponLifeFeedsBaseComponentVM

@property (nonatomic) double height;
@property (retain, nonatomic) AWEURLModel *imageCover;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverBottomInfo *coverBottomInfo;
@property (retain, nonatomic) NSString *titleContent;
@property (retain, nonatomic) AWEGrouponLifeFeedsUserInfo *userInfo;
@property (nonatomic) double heightWidthRatio;
@property (nonatomic) long long titleLimitLine;
@property (nonatomic) double titleHeight;
@property (nonatomic) BOOL canPlay;
@property (nonatomic) BOOL titleOverLengthTruncation;
@property (nonatomic) double singleLineHeight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeModel *innerAwemeModel;
@property (nonatomic) BOOL showingTargetPageInInner;

+ (double)cardPadding;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)componentDidEndShow:(unsigned long long)a0;
- (id)buildTitleAttributedString;
- (id)parseUIDataDic:(id)a0;
- (double)calculateTitleHeightForNewStyleWithMaxWidth:(double)a0;
- (double)calculateSingleLineHeightForAttributedString:(id)a0;
- (id)buildLifeExtraInfoWithModel:(id)a0 extraInfo:(id)a1;
- (id)originAdInfoFromViewModel;
- (struct CGSize { double x0; double x1; })sizeForNewStyleWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForOldStyleWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
