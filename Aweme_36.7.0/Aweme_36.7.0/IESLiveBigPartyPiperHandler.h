@class NSString;
@protocol IESLiveBigPartyAudienceAction, IESLiveBigPartyAnchorAction;

@interface IESLiveBigPartyPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveBigPartyAnchorAction> bigPartyActionCreator;
@property (retain, nonatomic) id<IESLiveBigPartyAudienceAction> adminAction;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)interactInviteCallHandler;
- (void).cxx_destruct;

@end
