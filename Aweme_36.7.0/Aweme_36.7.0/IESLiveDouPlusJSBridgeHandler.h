@class AWELiveDouPlusDataController, NSString;

@interface IESLiveDouPlusJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) AWELiveDouPlusDataController *liveDouPlusDataController;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)showDouPlusDialogCallHandler;
- (void).cxx_destruct;

@end
