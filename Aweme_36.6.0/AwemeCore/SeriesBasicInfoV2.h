@class NSString;

@interface SeriesBasicInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *seriesId;
@property (nonatomic) BOOL hasSeriesId;
@property (copy, nonatomic) NSString *seriesAuthorId;
@property (nonatomic) BOOL hasSeriesAuthorId;

+ (id)descriptor;

@end
