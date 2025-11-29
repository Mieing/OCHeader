@class NSString;

@interface TIMXPBNExtVersion : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;

+ (id)descriptor;

@end
