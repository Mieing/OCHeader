@interface BDUGLuckyDogImageManager : NSObject

+ (id)sharedInstance;

- (void)requestImage:(id)a0 complete:(id /* block */)a1;
- (void)_requestImage:(id)a0 complete:(id /* block */)a1;
- (id)_spreadURL:(id)a0;
- (void)setImageView:(id)a0 withImageURL:(id)a1 placeholder:(id)a2;
- (void)settingsUpdate;
- (id)init;
- (void)dealloc;

@end
