@class NSString, AWEECOMIMChatDetailFloatVCHelper;

@interface AWEECOMIMAuthorChatDetailFloatViewController : AWEECOMIMAuthorChatDetailViewController <AWEECOMIMChatDetailFloatVCProtocol>

@property (retain, nonatomic) AWEECOMIMChatDetailFloatVCHelper *floatVCHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowTopBannerView;
- (id)initWithIsExpand:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
