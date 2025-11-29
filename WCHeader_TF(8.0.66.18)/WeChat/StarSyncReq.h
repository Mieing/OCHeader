@class BaseRequest, NSData;

@interface StarSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *keybuf;

+ (void)initialize;

@end
