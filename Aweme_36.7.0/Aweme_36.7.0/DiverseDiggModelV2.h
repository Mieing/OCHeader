@class NSString;

@interface DiverseDiggModelV2 : GPBMessage

@property (nonatomic) long long actionId;
@property (nonatomic) BOOL hasActionId;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasCount;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
