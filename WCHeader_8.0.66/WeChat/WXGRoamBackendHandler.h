@protocol WXGRoamBackendHandlerDelegate;

@interface WXGRoamBackendHandler : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WXGRoamBackendHandlerDelegate> delegate;
@property (nonatomic) BOOL onAutoTestMode;

+ (id)decodeBase64String:(id)a0;
+ (id)encodeDataBae64:(id)a0;
+ (id)channelRespToString:(id)a0;

- (void)getEncrytKey:(id)a0 invokeID:(unsigned long long)a1;
- (void)genEncrytKey:(unsigned long long)a0;
- (void)buildRelationSession:(id)a0 invokeID:(unsigned long long)a1;
- (void)buildSecureChannel:(id)a0 invokeID:(unsigned long long)a1;
- (void)setRoamBackupPackage:(id)a0 invokeID:(unsigned long long)a1;
- (void)getRoamBackupPackage:(id)a0 invokeID:(unsigned long long)a1;
- (void)getDeviceNetworkInfo:(unsigned long long)a0;
- (void)dealloc;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)mockAutoTestPackage;
- (void).cxx_destruct;

@end
