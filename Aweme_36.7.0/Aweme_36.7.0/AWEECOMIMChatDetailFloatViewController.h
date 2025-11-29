@class NSString, AWEECOMIMChatDetailFloatVCHelper;

@interface AWEECOMIMChatDetailFloatViewController : AWEECOMIMShopChatDetailViewController <AWEECOMIMChatDetailFloatVCProtocol>

@property BOOL hasRequestTopIcons;
@property (retain, nonatomic) AWEECOMIMChatDetailFloatVCHelper *floatVCHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowTopBannerView;
- (id)initWithIsExpand:(BOOL)a0;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (void)tryToShowTopIcon;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
