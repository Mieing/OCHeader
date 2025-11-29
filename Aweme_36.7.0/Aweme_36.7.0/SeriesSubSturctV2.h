@class NSString, LVideoBriefStructV2;

@interface SeriesSubSturctV2 : GPBMessage

@property (copy, nonatomic) NSString *seriesId;
@property (nonatomic) BOOL hasSeriesId;
@property (nonatomic) int contentSubType;
@property (nonatomic) BOOL hasContentSubType;
@property (retain, nonatomic) LVideoBriefStructV2 *lvideoBrief;
@property (nonatomic) BOOL hasLvideoBrief;

+ (id)descriptor;

@end
