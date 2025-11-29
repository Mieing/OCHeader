@class NSString;

@interface AWEAlbumViewModelFactoryImpl : NSObject <AWEAlbumViewModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAlbumViewModelWithInputData:(id)a0;

@end
