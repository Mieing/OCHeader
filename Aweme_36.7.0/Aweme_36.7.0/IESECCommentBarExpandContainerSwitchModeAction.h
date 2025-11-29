@class NSString, NSObject;
@protocol IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol;

@interface IESECCommentBarExpandContainerSwitchModeAction : NSObject <IESECGoodsDetailContainerSwitchMode>

@property (retain, nonatomic) NSObject<IESECGoodsDetailHostInjectable, IESECCommentBarExpandContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidSwitchTo:(long long)a0;
- (void)containerWillSwitchTo:(long long)a0;
- (void)containerDidCancelSwitchTo:(long long)a0;
- (void)additionActionAfterSwitchTo:(long long)a0;
- (void)containerDidAppearAgain;
- (void)containerEnterOtherPageFullScreen:(BOOL)a0;
- (void).cxx_destruct;

@end
