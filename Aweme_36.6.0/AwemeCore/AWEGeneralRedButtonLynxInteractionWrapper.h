@class NSString, NSMutableDictionary, UIView;
@protocol AWEGeneralRedButtonLynxWrapperDelegate, BDXViewContainerProtocol;

@interface AWEGeneralRedButtonLynxInteractionWrapper : NSObject <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxInteractionWrapperView;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (nonatomic) BOOL isLoadFailed;
@property (weak, nonatomic) id<AWEGeneralRedButtonLynxWrapperDelegate> lynxWrapperDelegate;
@property (nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)__bindEvent;
- (id)__registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)__unbindEvent;
- (id)initWithURLString:(id)a0 lynxWrapperDelegate:(id)a1;
- (void)elementDidAppearWithAweme:(id)a0;
- (void)elementDidClickWithAweme:(id)a0;
- (void)updateContainerWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
