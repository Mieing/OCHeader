@class NSString, NSDictionary;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, IESLLTempoBuiltInLynxViewDelegate;

@interface IESLLTempoBuiltInLynxView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) id<AnnieXContainerBaseProtocol> cardView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (weak, nonatomic) id<IESLLTempoBuiltInLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)loadUrl:(id)a0 data:(id)a1 globalProps:(id)a2;
- (void).cxx_destruct;

@end
