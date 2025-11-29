@class NSString;
@protocol IESLiveURLSchemaHandler;

@interface IESECLiveURLSchemaHandlerIESECBridger : NSObject <IESECLiveURLSchemaHandler>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)openURL:(id)a0 fromInside:(BOOL)a1;
- (void).cxx_destruct;

@end
