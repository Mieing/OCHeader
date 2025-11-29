@class AWEProfileExtensionAreaContainer_New, NSString, AWEProfileHeaderProvidedServiceViewController, AWEProfileHeaderContext;

@interface AWEProfileHeaderProvidedServiceCollectionViewCell : UICollectionViewCell <AWEProfileHeaderProvidedServiceContainerProtocol, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEProfileHeaderProvidedServiceViewController *providedServiceVC;
@property (retain, nonatomic) AWEProfileExtensionAreaContainer_New *container_New;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderContext:(id)a0;
- (void)profilePageDidVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (id)containerView;

@end
