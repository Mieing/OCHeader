@class NSString;

@interface TIMXPBNGetCSBUserMessageRequestBody : GPBMessage

@property (nonatomic) long long csbVersion;
@property (nonatomic) BOOL hasCsbVersion;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int csbBizId;
@property (nonatomic) BOOL hasCsbBizId;

+ (id)descriptor;

- (void)setSource:(id)a0;
- (void)setCsbBizId:(int)a0;
- (void)setCsbVersion:(long long)a0;

@end
