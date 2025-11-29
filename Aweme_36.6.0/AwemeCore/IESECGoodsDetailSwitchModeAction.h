@class IESECGoodsDetailParameters, NSString, NSObject;
@protocol IESECGoodsDetailLiveFloatOnTop, IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailSwitchModeAction : NSObject <IESECGoodsDetailContainerSwitchMode, IESECGoodsDetailParametersProtocol>

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveFloatOnTop;
@property (retain, nonatomic) NSObject<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidSwitchTo:(long long)a0;
- (void)containerWillSwitchTo:(long long)a0;
- (void)containerDidCancelSwitchTo:(long long)a0;
- (void)initializeWithParameters:(id)a0;
- (void)additionActionAfterSwitchTo:(long long)a0;
- (void)containerDidAppearAgain;
- (void)handleLiveFloatOnTopIfNeeded;
- (void).cxx_destruct;

@end
