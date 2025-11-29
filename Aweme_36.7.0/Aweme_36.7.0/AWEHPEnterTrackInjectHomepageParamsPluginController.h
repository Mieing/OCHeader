@class NSString, NSMutableDictionary;

@interface AWEHPEnterTrackInjectHomepageParamsPluginController : NSObject <AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerPrivateProtocol>

@property (retain, nonatomic) NSMutableDictionary *enterMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bottomChannel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (void)bottomChannel:(id)a0 willSelectItemWithEnterModel:(id)a1;
- (void)channel:(id)a0 enterWithModel:(id)a1;
- (id)channel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (id)p_getCustomTrackParamsWithTrackInfo:(id)a0;
- (void)p_recordTimestampWithTabID:(id)a0 enterModel:(id)a1;
- (id)p_getEnterInfoWithTabID:(id)a0;
- (id)p_getEnterDurationWithTabID:(id)a0;
- (id)p_getEnterModelWithTabID:(id)a0;
- (void).cxx_destruct;

@end
