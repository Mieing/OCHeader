@class BaseRequest, NSData;

@interface FPInitRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *randomkey;
@property (retain, nonatomic) NSData *spamBuff;

+ (void)initialize;

@end
