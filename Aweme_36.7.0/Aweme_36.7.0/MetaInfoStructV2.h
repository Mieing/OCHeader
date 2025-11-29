@class NSString;

@interface MetaInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) long long reqTime;
@property (nonatomic) BOOL hasReqTime;
@property (nonatomic) long long source;
@property (nonatomic) BOOL hasSource;

+ (id)descriptor;

@end
