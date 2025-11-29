@class NSString, NSDictionary, LynxViewGroup, IESLLPOIShelfContainerComponentViewModel;

@interface IESLLPOIAtmosphereHeaderView : UIView <LynxViewLifecycle>

@property (retain, nonatomic) LynxViewGroup *lynxViewGroup;
@property (copy, nonatomic) NSDictionary *data;
@property (weak, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (copy, nonatomic) NSString *atmosphereHeaderUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
