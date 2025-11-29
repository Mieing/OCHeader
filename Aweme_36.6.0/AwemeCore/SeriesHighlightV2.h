@class NSString;

@interface SeriesHighlightV2 : GPBMessage

@property (copy, nonatomic) NSString *parentItemId;
@property (nonatomic) BOOL hasParentItemId;
@property (nonatomic) long long parentItemCreateTime;
@property (nonatomic) BOOL hasParentItemCreateTime;
@property (nonatomic) long long startTimeMsec;
@property (nonatomic) BOOL hasStartTimeMsec;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) BOOL hasAuthToken;

+ (id)descriptor;

@end
