@class NSString;

@interface IESECLiveScreenModuleIESECBridger : NSObject <IESECLiveScreenModule>

@property (retain, nonatomic) id protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

@end
