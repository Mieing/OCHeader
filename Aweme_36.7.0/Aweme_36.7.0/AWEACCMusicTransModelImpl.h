@class NSString;

@interface AWEACCMusicTransModelImpl : NSObject <ACCMusicTransModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)musicModelImplClass;
- (Class)bannerModelImplClass;
- (Class)urlModelImplClass;
- (Class)videoMusicModelImplClass;
- (id)musicModelForDynamicModel:(id)a0;
- (id)dynamicMusicCardTokenType:(id)a0;

@end
