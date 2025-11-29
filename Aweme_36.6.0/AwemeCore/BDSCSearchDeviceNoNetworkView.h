@class NSString, BDSCCloudNoNetworkView;

@interface BDSCSearchDeviceNoNetworkView : UIView <BDSCSearchDeviceNoNetworkViewProtocol>

@property (retain, nonatomic) BDSCCloudNoNetworkView *networkView;
@property (nonatomic) unsigned long long searchStatusType;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
