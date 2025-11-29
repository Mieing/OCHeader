@class NSString;

@interface AWEHPEnterTrackInjectAwemeParamsPluginController : NSObject <AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerPrivateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bottomChannel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (id)channel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (id)p_getCustomTrackParamsWithTrackInfo:(id)a0;

@end
