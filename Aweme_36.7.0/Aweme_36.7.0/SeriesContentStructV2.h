@class NSString;

@interface SeriesContentStructV2 : GPBMessage

@property (nonatomic) int seriesContentType;
@property (nonatomic) BOOL hasSeriesContentType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL hasJumpSchema;

+ (id)descriptor;

@end
