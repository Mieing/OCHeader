@class HTSLiveNativeAnimationUserEnterNode, NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveLynxUserEnterView : IESLivePrivilegeEntryView <IESLivePrivilegeLynxPlayerViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxUserEnterView;
@property (retain, nonatomic) HTSLiveNativeAnimationUserEnterNode *node;
@property (nonatomic) BOOL resourceComplete;
@property (nonatomic) BOOL lynxCreatedSuccess;
@property (nonatomic) BOOL isLynxFirstCreate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickView;
- (void)updateWithEnterMessageNode:(id)a0;
- (void)reportError:(id)a0 node:(id)a1;
- (void)reportPerformanceWithNode:(id)a0;
- (void)didPlayFinish:(BOOL)a0 errorMsg:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endAnimation;

@end
