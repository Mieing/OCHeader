@class NSString, HMDDebugRealConfig;

@interface HMDExceptionUpload : NSObject <AWECloudCommandProtocol>

@property (retain, nonatomic) HMDDebugRealConfig *debugRealConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)RefactorExcuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)oldExcuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchExcptionDataWithCallback:(id /* block */)a0;
- (id)eventTypeWithCloudCommandUploadType:(id)a0;
- (void).cxx_destruct;

@end
