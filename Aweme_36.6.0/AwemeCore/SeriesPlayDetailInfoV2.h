@class SeriesItemTitlePrefixV2, SeriesOutflowContinuePlayInfoV2;

@interface SeriesPlayDetailInfoV2 : GPBMessage

@property (retain, nonatomic) SeriesOutflowContinuePlayInfoV2 *outflowContinuePlayInfo;
@property (nonatomic) BOOL hasOutflowContinuePlayInfo;
@property (retain, nonatomic) SeriesItemTitlePrefixV2 *itemTitlePrefix;
@property (nonatomic) BOOL hasItemTitlePrefix;
@property (nonatomic) long long seriesAwemeIndex;
@property (nonatomic) BOOL hasSeriesAwemeIndex;

+ (id)descriptor;

@end
