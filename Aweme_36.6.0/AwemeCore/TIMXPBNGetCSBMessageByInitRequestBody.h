@interface TIMXPBNGetCSBMessageByInitRequestBody : GPBMessage

@property (nonatomic) long long csbVersion;
@property (nonatomic) BOOL hasCsbVersion;
@property (nonatomic) int convLimit;
@property (nonatomic) BOOL hasConvLimit;
@property (nonatomic) int csbBizId;
@property (nonatomic) BOOL hasCsbBizId;

+ (id)descriptor;

@end
