@class NSDictionary, AWEPOIShelfContainerComponentViewModel, NSString;
@protocol AWEPOICouponBarViewDelegate;

@interface AWEPOICouponBarView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSDictionary *data;
@property (weak, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (weak, nonatomic) id<AWEPOICouponBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
