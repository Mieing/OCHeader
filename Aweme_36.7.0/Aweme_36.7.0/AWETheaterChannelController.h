@class NSString, AWETheaterViewController;
@protocol AWEHPChannelControllerConfigProtocol;

@interface AWETheaterChannelController : NSObject <AWEHPChannelControllerProtocol>

@property (retain, nonatomic) AWETheaterViewController *contentVC;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETheaterViewControllerCommonAdapterClass;

- (BOOL)channelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)getContentViewController;
- (void)generateContentVCIfNeed;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
