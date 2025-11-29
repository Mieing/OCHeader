@class UIViewController, AWEDetailVideoCutTemplateTracker, IESServiceProvider, NSString, AWEDetailVideoCutTemplateViewModel;

@interface AWEDetailVideoCutTemplateCollectionServiceImpl : NSObject <AWEDetailCollectService>

@property (weak, nonatomic) AWEDetailVideoCutTemplateViewModel *context;
@property (weak, nonatomic) AWEDetailVideoCutTemplateTracker *tracker;
@property (weak, nonatomic) IESServiceProvider *serviceProvider;
@property (weak, nonatomic) UIViewController *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectWithActionSender:(id)a0;
- (void)p_origCollectWithActionSender:(id)a0;
- (id)kMVAWEFavoriteActionNotification;
- (id)initWithHost:(id)a0 StateContext:(id)a1 tracker:(id)a2 serviceProvider:(id)a3;
- (void).cxx_destruct;

@end
