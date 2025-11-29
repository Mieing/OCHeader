@interface TIMXPBNThreadMessageByInitRequestBody : GPBMessage

@property (nonatomic) long long threadVersion;
@property (nonatomic) BOOL hasThreadVersion;
@property (nonatomic) int threadLimit;
@property (nonatomic) BOOL hasThreadLimit;
@property (nonatomic) int msgLimit;
@property (nonatomic) BOOL hasMsgLimit;

+ (id)descriptor;

@end
