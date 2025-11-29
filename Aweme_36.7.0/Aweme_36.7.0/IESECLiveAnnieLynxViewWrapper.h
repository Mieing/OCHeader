@class IESECLiveContext, NSString, UIView;
@protocol IESHYContainerProtocol, IESECLiveLynxViewChangeDelegate, IESECLigoLynxViewDataProtocol, AnnieLiveBizCardProviderProtocol;

@interface IESECLiveAnnieLynxViewWrapper : UIView <IESHYHybridViewLifecycleProtocol, IESECLigoComponentProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *contentView;
@property (retain, nonatomic) id<IESECLigoLynxViewDataProtocol> viewModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) double startLoadTime;
@property (weak, nonatomic) id<IESECLiveLynxViewChangeDelegate> delegate;
@property (nonatomic) BOOL enableRespondCallBack;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocol> annieXCardProvider;
@property (nonatomic) BOOL isCardReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 withContainerID:(id)a1;
- (void)didPageVisibilityChange:(BOOL)a0;
- (BOOL)enableReuseComponent;
- (void)didComponentUnload;
- (void)willComponentLoadOrUpdate;
- (void)parentPrepareForReuse;
- (void)updateComponentWithModel:(id)a0 ligoContext:(id)a1;
- (id)p_genLynxCardWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)lynxCardParamsWithModel:(id)a0;
- (id)p_trackParamsWithModel:(id)a0;
- (id)initWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 liveContext:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
