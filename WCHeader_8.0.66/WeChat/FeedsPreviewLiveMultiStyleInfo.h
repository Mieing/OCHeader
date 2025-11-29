@class FeedsPreviewLiveMultiStyleInfo_StyleOne, FeedsPreviewLiveMultiStyleInfo_StyleEleven, FeedsPreviewLiveMultiStyleInfo_StyleFour, FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen, FeedsPreviewLiveMultiStyleInfo_StyleFive, NSData, FeedsPreviewLiveMultiStyleInfo_StyleTwelve, NSMutableArray, FeedsPreviewLiveMultiStyleInfo_StyleTen, FeedsPreviewLiveMultiStyleInfo_StyleTwo, FeedsPreviewLiveMultiStyleInfo_StyleThree;

@interface FeedsPreviewLiveMultiStyleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int styleType;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleOne *styleOneConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTwo *styleTwoConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleThree *styleThreeConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleFour *styleFourConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleFive *styleFiveConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTen *styleTenConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleEleven *styleElevenConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTwelve *styleTwelveConf;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen *styleSeventeenConf;
@property (retain, nonatomic) NSData *encryptedExtInfo;
@property (nonatomic) unsigned long long forbidSolidifiedStyle;
@property (retain, nonatomic) NSMutableArray *independentStyleList;

+ (void)initialize;

- (id)logPrintString;

@end
