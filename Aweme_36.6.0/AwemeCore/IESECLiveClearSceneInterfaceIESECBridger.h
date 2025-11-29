@class NSString;
@protocol IESClearSceneInterface;

@interface IESECLiveClearSceneInterfaceIESECBridger : NSObject <IESECLiveClearSceneInterface>

@property (retain, nonatomic) id<IESClearSceneInterface> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

@end
