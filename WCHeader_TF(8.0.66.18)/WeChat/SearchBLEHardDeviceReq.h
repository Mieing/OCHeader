@class BaseRequest, NSString;

@interface SearchBLEHardDeviceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *mac;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *category;

+ (void)initialize;

@end
