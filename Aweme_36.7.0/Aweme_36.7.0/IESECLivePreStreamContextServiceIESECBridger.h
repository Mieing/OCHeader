@class NSString;
@protocol IESLivePreStreamContextService;

@interface IESECLivePreStreamContextServiceIESECBridger : NSObject <IESECLivePreStreamContextService>

@property (retain, nonatomic) id<IESLivePreStreamContextService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)trackPreviewModuleShow:(id)a0;
- (void)trackPreviewModuleClick:(id)a0;
- (void).cxx_destruct;

@end
