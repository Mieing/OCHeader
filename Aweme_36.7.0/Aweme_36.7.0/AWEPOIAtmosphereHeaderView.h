@class NSDictionary, AWEPOIShelfContainerComponentViewModel, NSString;

@interface AWEPOIAtmosphereHeaderView : UIView <LynxViewLifecycle>

@property (copy, nonatomic) NSDictionary *data;
@property (weak, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (copy, nonatomic) NSString *atmosphereHeaderUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
