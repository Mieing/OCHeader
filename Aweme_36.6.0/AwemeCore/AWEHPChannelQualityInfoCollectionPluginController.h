@class NSString, NSMutableDictionary;

@interface AWEHPChannelQualityInfoCollectionPluginController : NSObject <AWEHPChannelPluginControllerProtocol>

@property (nonatomic) long long tabLoadOrder;
@property (retain, nonatomic) NSMutableDictionary *loadTabs;
@property (nonatomic) double globalMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelViewDidLoad:(id)a0;
- (void)channelViewDidResume:(id)a0;
- (id)channel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (void)p_topChannelControllerViewDidInit:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
