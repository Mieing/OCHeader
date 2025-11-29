@class NSString;
@protocol IESLiveFansGroupAction;

@interface IESLiveFansGroupPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveFansGroupAction> actionCreator;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)setFansStatusCallHandler;
- (id /* block */)createFansGroupCallHandler;
- (id /* block */)joinFansGroupCallHandler;
- (id /* block */)enterFansGroupChatCallHandler;
- (id /* block */)openFansGroupSettingCallHandler;
- (void).cxx_destruct;

@end
