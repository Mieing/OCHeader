@class NSString;
@protocol IESLiveMessageInteractionModuleFixedCardInterface;

@interface IESECLivePublicScreenFixedCardInterfaceIESECBridger : NSObject <IESECLivePublicScreenFixedCardInterface>

@property (retain, nonatomic) id<IESLiveMessageInteractionModuleFixedCardInterface> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

@end
