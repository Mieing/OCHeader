@class IESPiper, IESLiveCommonPiperHandler, NSString;

@interface IESLivePopularityGemInterface : NSObject <IESLivePopularGemJSBridge>

@property (weak, nonatomic) IESPiper *piper;
@property (retain, nonatomic) IESLiveCommonPiperHandler *piperHandler;
@property (weak, nonatomic) IESPiper *userProfilePiper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openLiveRechargeWithPiper:(id)a0 result:(id)a1 callBack:(id /* block */)a2;
- (void)commentWithResult:(id)a0 andCallBack:(id /* block */)a1;
- (void)openUserProfileWithPiper:(id)a0 result:(id)a1 andCallBack:(id /* block */)a2;
- (id)sourceWithResult:(id)a0;
- (void)payOpenStage:(id)a0 callBack:(id /* block */)a1 andParams:(id)a2 animated:(BOOL)a3;
- (void)payCloseStage;
- (void)userProfileOpenStage:(id)a0 callBack:(id /* block */)a1 animated:(BOOL)a2;
- (void)userProfileStage;
- (void).cxx_destruct;

@end
