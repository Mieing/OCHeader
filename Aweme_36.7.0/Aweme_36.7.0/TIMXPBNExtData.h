@class NSString;

@interface TIMXPBNExtData : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int opType;
@property (nonatomic) BOOL hasOpType;

+ (id)descriptor;

@end
