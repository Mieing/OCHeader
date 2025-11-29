@class AWECommentLynxEggModel, NSString, UIView, NSMutableArray, AWECommentMentionLynxEggModel;
@protocol BDXViewContainerProtocol;

@interface AWECommentEggLynxContainerView : UIView <BDXContainerLifecycleProtocol, AWECommentEggLynxContainerViewProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (retain, nonatomic) AWECommentLynxEggModel *lynxEggModel;
@property (retain, nonatomic) AWECommentMentionLynxEggModel *commentMentionLynxEggModel;
@property (nonatomic) struct CGSize { double width; double height; } baseViewSize;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (nonatomic) BOOL hasStartCallback;
@property (nonatomic) BOOL hasPauseCallback;
@property (copy, nonatomic) id /* block */ removeContainerCompletionHandler;
@property (nonatomic) BOOL isLynxPlaying;
@property (copy, nonatomic) id /* block */ pauseVideoBlock;
@property (copy, nonatomic) id /* block */ playVideoBlock;
@property (copy, nonatomic) id /* block */ onClickBlock;
@property (copy, nonatomic) id /* block */ onCompletionBlock;
@property (copy, nonatomic) id /* block */ onClickButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)registerBridgeHandle:(id /* block */)a0 forMethod:(id)a1;
- (void)resetCallbackPropertyState;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxEggModel:(id)a1;
- (void)__unregisterSubscriber;
- (void)setupLynxView;
- (id)__bdxParams;
- (void)__registerSubscribes;
- (void)removeContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxEggModel:(id)a1 removeContainerCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
