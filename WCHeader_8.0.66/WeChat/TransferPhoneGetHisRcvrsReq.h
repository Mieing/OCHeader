@class BaseRequest, NSString;

@interface TransferPhoneGetHisRcvrsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lastId;
@property (retain, nonatomic) NSString *homepageExt;

+ (void)initialize;

@end
