@class NSString;

@interface ZimAliCloudValidateResponse : NSObject

@property (retain, nonatomic) NSString *ValidationRetCode;
@property (retain, nonatomic) NSString *ProductRetCode;
@property (retain, nonatomic) NSString *HasNext;
@property (retain, nonatomic) NSString *nextProtocol;
@property (retain, nonatomic) NSString *ExtParams;
@property (retain, nonatomic) NSString *RetCodeSub;
@property (retain, nonatomic) NSString *RetMessageSub;

- (void).cxx_destruct;

@end
