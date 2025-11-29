@class NSString, UIImageView, UIView, NSMutableArray;
@protocol BDXViewContainerProtocol;

@interface AWEShareGoodsTokenNoteLynxView : AWEShareTokenNoteBaseCardView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) NSMutableArray *reflowBridgeSubscriberList;
@property (copy, nonatomic) NSString *beforeReturnData;
@property (nonatomic) unsigned long long lynxViewType;
@property (copy, nonatomic) id /* block */ loadErrorBlock;
@property (nonatomic) double firstInitTime;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double finishLoadTime;
@property (nonatomic) double startFetchTime;
@property (nonatomic) double finishFetchTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (id)urlForType:(unsigned long long)a0;
- (void)unbindEvent;
- (void)bindEvent;
- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 extraData:(id)a1 type:(unsigned long long)a2 loadErrorBlock:(id /* block */)a3;
- (id)initWithModel:(id)a0 extraData:(id)a1;
- (id)_convertFenToYuan:(id)a0;
- (void)loadReflowWindowBulletView:(id)a0;
- (void)dismissViewTapped;
- (void)dismissButtonTapped;
- (void)goToEcommerce;
- (void)tapReport;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissView;

@end
