@class NSString;

@interface AWEStudioImageToVideoServiceImpl : NSObject <AWEStudioImageToVideoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchEffectWithID:(id)a0 completion:(id /* block */)a1;
+ (id)createVideoGenerator;
+ (void)deleteVideoCacheWithScene:(id)a0;
+ (id)cacheDirectoryForScene:(id)a0;


@end
