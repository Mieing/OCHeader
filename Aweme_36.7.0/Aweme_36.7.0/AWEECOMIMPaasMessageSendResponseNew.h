@class NSString, NSDictionary, BDECPigeonMessageSendResponseV2;

@interface AWEECOMIMPaasMessageSendResponseNew : NSObject <AWEECOMIMPaasMessageSendResponseProtocol>

@property (retain, nonatomic) BDECPigeonMessageSendResponseV2 *sendResponse;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long checkCode;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) long long sendMethodType;
@property (copy, nonatomic) NSDictionary *responseInErrorInfo;
@property (copy, nonatomic) NSString *checkMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)PaasMessageSendResponseWithPigeonMessageSendResponse:(id)a0;

- (void).cxx_destruct;

@end
