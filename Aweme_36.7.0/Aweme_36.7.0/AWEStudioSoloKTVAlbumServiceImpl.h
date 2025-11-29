@class NSString;

@interface AWEStudioSoloKTVAlbumServiceImpl : NSObject <AWEStudioSoloKTVAlbumService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbumVC:(id)a0 completion:(id /* block */)a1;
- (BOOL)isUnder4K:(id)a0;

@end
