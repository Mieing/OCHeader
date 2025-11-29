@class NSString, AWEHomepageViewControllerNew, AWEEnterpriseProfileTabConfiguration;

@interface AWEEnterpriseProfileTabFeature : AWEFeature <AWEFeatureDIPropertyProfileTabConfiguration, AWEEnterpriseProfileTabProtocol>

@property (retain, nonatomic) AWEHomepageViewControllerNew *homepageVC;
@property (retain, nonatomic) AWEEnterpriseProfileTabConfiguration *configuration;
@property (retain, nonatomic) AWEEnterpriseProfileTabConfiguration *protocolConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliasName;

- (id)reactID;
- (void)invokeJSWithParameters:(id)a0;
- (struct CGPoint { double x0; double x1; })collectionViewContentOffset;
- (void).cxx_destruct;
- (unsigned long long)featureType;
- (void)reload;
- (id)view;
- (id)viewController;

@end
