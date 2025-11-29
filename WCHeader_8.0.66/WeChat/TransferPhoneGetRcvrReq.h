@class BaseRequest, NSString;

@interface TransferPhoneGetRcvrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *rcvrId;
@property (retain, nonatomic) NSString *homepageExt;
@property (nonatomic) unsigned int inputType;

+ (void)initialize;

@end
