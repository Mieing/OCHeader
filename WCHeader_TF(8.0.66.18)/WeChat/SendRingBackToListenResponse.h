@class NSString, BaseResponse;

@interface SendRingBackToListenResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long minSeq;
@property (nonatomic) unsigned long long scanRingBackCount;
@property (nonatomic) unsigned long long sendRingBackCount;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
