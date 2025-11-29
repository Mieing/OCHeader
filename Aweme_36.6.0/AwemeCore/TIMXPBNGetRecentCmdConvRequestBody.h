@class NSString;

@interface TIMXPBNGetRecentCmdConvRequestBody : GPBMessage

@property (nonatomic) long long cmdMessageConvVersion;
@property (nonatomic) BOOL hasCmdMessageConvVersion;
@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL hasReverse;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;

+ (id)descriptor;

- (void)setSource:(id)a0;
- (void)setCmdMessageConvVersion:(long long)a0;

@end
