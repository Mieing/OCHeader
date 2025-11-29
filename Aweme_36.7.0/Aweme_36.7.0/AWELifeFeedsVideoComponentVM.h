@class AWELifeFeedsCoverTopInfo, NSString, AWELifeFeedsCoverBottomInfo, AWELifeFeedsUserInfo, AWEAwemeModel, AWEURLModel;

@interface AWELifeFeedsVideoComponentVM : AWELifeFeedsBaseComponentVM

@property (nonatomic) double height;
@property (retain, nonatomic) AWEURLModel *imageCover;
@property (retain, nonatomic) AWELifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWELifeFeedsCoverBottomInfo *coverBottomInfo;
@property (retain, nonatomic) NSString *titleContent;
@property (retain, nonatomic) AWELifeFeedsUserInfo *userInfo;
@property (nonatomic) double heightWidthRatio;
@property (nonatomic) long long titleLimitLine;
@property (nonatomic) double titleHeight;
@property (nonatomic) BOOL canPlay;
@property (nonatomic) BOOL titleOverLengthTruncation;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeModel *innerAwemeModel;
@property (nonatomic) BOOL showingTargetPageInInner;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)componentDidEndShow:(unsigned long long)a0;
- (id)parseUIDataDic:(id)a0;
- (id)buildLifeExtraInfoWithModel:(id)a0 extraInfo:(id)a1;
- (id)originAdInfoFromViewModel;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
