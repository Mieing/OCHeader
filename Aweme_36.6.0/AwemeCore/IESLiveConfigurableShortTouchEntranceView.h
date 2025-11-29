@class NSString, IESLiveGCDTimer, UIView, IESLiveConfigurableEntranceModel;
@protocol IESHYContainerProtocol;

@interface IESLiveConfigurableShortTouchEntranceView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESLiveConfigurableEntranceModel *model;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ timeout;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didSetAttachingDIContext;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)invalidTimer;
- (void)resetSuccessCallback;
- (void)resetTimeoutCallback;
- (id)initWithModel:(id)a0 success:(id /* block */)a1 timeout:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
