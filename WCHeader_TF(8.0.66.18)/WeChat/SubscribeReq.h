@class NSString;

@interface SubscribeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *tagBuf;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *expType;

+ (void)initialize;

@end
