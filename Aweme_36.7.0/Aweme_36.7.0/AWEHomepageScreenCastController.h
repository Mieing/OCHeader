@class NSString;

@interface AWEHomepageScreenCastController : NSObject <AWEScreenCastPendantDataProvider, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;

- (id)referString;
- (id)subScene;
- (void)channelViewDidAppear:(id)a0;
- (void)channelViewDidDisappear:(id)a0;
- (id)pendantService;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (id)initWithChannel:(id)a0;

@end
