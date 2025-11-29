@class NSString, NSDictionary, UIView;
@protocol IESHYContainerProtocol, IESECMarketingBizComponentDelegate;

@interface IESECMarketingBizComponent : NSObject <IESHYHybridViewLifecycleProtocol>

@property (copy, nonatomic) NSString *rit;
@property (copy, nonatomic) NSString *bizParams;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSDictionary *layoutInfoMap;
@property (copy, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) UIView<IESHYContainerProtocol> *componentView;
@property (weak, nonatomic) id<IESECMarketingBizComponentDelegate> delegate;
@property (nonatomic) double loadTimeStamp;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (long long)loadingTime;
- (double)getCurrentTimeStamp;
- (id)initWithRit:(id)a0 bizParams:(id)a1 componentId:(id)a2 layoutInfoMap:(id)a3 extra:(id)a4 delegate:(id)a5 completion:(id /* block */)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referFrameWithTargetView:(id)a0;
- (void)refreshLoadTimeStamp;
- (void).cxx_destruct;

@end
