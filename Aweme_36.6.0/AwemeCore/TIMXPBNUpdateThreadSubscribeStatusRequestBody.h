@class NSString;

@interface TIMXPBNUpdateThreadSubscribeStatusRequestBody : GPBMessage

@property (copy, nonatomic) NSString *threadId;
@property (nonatomic) BOOL hasThreadId;
@property (nonatomic) long long threadShortId;
@property (nonatomic) BOOL hasThreadShortId;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;

+ (id)descriptor;

@end
