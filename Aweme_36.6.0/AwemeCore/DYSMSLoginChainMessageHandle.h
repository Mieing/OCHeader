@class NSMutableDictionary;

@interface DYSMSLoginChainMessageHandle : NSObject

@property (retain, nonatomic) NSMutableDictionary *sendCodeLogIDAndMobileCache;
@property (copy, nonatomic) id /* block */ verificationCodeMessageHandle;

+ (id)sharedInstance;

- (void)handleVerificationCodeLoginMessage:(id)a0;
- (void).cxx_destruct;

@end
