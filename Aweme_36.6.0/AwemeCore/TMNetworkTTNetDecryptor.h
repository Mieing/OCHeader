@class NSString, TMNetworkBodyStructDescriptionPraser;

@interface TMNetworkTTNetDecryptor : NSObject <TMNetworkBodyStructDescriptionPraserDelegate, TMNetworkDecryptBodyProtocol>

@property (retain, nonatomic) TMNetworkBodyStructDescriptionPraser *bodyPraser;
@property (nonatomic) double timeoutPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithTimeoutPeriod:(double)a0;
+ (id)sharedInstance;

- (id)bodyFieldAction:(id)a0 error:(id *)a1;
- (void)setupTimeoutPeriod:(double)a0;
- (id)dictionaryToMutableDictionary:(id)a0;
- (void)decryptorBody:(id *)a0 decryptError:(id *)a1;
- (void)decryptorBodyField:(id *)a0 bodyFieldDescriptions:(id)a1 decryptError:(id *)a2;
- (id)creatDecryptorError:(id)a0;
- (id)arrayToMutableArray:(id)a0;
- (void)decryptorBody:(id *)a0 bodyFieldDescriptions:(id)a1 decryptError:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
