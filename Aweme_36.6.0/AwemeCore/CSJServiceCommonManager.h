@protocol BUADServiceNetProtocol, BUADServiceUnzipProtocol, BUADServiceImageProtocol, BUADServiceLogProtocol, BUStorageProtocol;

@interface CSJServiceCommonManager : NSObject

@property (retain, nonatomic) id<BUADServiceImageProtocol> imageImp;
@property (retain, nonatomic) id<BUADServiceNetProtocol> netImp;
@property (retain, nonatomic) id<BUADServiceUnzipProtocol> unzipImp;
@property (retain, nonatomic) id<BUStorageProtocol> storageImp;
@property (retain, nonatomic) id<BUADServiceLogProtocol> logImp;

+ (id)getNetProtocolImp;
+ (id)getImageProtocolImp;
+ (id)getUnzipProtocolImp;
+ (id)getLocalLogProtocolImp;
+ (id)getStorageProtocollImp;
+ (id)getDBStorageProtocolImpWithName:(id)a0 option:(id)a1;
+ (id)getKVStorageProtocolImpWithName:(id)a0 option:(id)a1;
+ (id)manager;
+ (void)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;

- (void).cxx_destruct;

@end
