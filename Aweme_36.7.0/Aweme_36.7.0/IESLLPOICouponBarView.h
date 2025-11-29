@class NSDictionary, IESLLPOIShelfContainerComponentViewModel, NSString;
@protocol IESLLPOICouponBarViewDelegate;

@interface IESLLPOICouponBarView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSDictionary *data;
@property (weak, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (weak, nonatomic) id<IESLLPOICouponBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
