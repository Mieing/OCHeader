@class GPBInt64Array;

@interface SeriesLimitFreeConfigV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int continuePlayFreeNum;
@property (nonatomic) BOOL hasContinuePlayFreeNum;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int totalFreePercent;
@property (nonatomic) BOOL hasTotalFreePercent;
@property (retain, nonatomic) GPBInt64Array *episodesArray;
@property (readonly, nonatomic) unsigned long long episodesArray_Count;

+ (id)descriptor;

@end
