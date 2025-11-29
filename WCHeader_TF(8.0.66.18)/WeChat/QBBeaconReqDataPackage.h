@class NSString, QBBeaconRequestPackage;

@interface QBBeaconReqDataPackage : NSObject

@property (retain, nonatomic) QBBeaconRequestPackage *requestPackage;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *reqServant;
@property (retain, nonatomic) NSString *reqFunc;
@property (nonatomic) int zipAlg;
@property (nonatomic) int encAlg;
@property (retain, nonatomic) NSString *encKey;
@property (retain, nonatomic) NSString *aesKeyEncrypt;
@property (retain, nonatomic) NSString *encPubKey;

+ (id)initWithRequestPkg:(id)a0;

- (id)init;
- (id)createReqData:(id *)a0;
- (id)getWithRspData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
