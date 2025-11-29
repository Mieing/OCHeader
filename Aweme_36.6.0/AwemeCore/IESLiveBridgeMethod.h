@class NSString, IESECLiveRoomContext, IESLiveBridgeMethodContext;

@interface IESLiveBridgeMethod : NSObject <IESLiveBridgeMethodProtocal, IESLivePiperHandlerProtocol>

@property (readonly, nonatomic) IESECLiveRoomContext *ieseclive_roomContext;
@property (retain, nonatomic) IESLiveBridgeMethodContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;

- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)registerHandlerWithBridge:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)authType;
- (id)init;
- (id)methodName;

@end
