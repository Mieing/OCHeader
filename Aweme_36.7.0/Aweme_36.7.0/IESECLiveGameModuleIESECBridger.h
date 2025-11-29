@class NSString;
@protocol IESLiveGameModule;

@interface IESECLiveGameModuleIESECBridger : NSObject <IESECLiveGameModule>

@property (retain, nonatomic) id<IESLiveGameModule> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)canShowFlashSaleEntrance;
- (void).cxx_destruct;

@end
