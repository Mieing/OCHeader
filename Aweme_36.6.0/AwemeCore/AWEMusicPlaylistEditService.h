@interface AWEMusicPlaylistEditService : NSObject

+ (id)sharedInstance;

- (void)selectCoverWithSourceView:(id)a0 trackInfo:(id)a1 completionBlock:(id /* block */)a2;
- (void)showCoverEditWithImage:(id)a0 sourceView:(id)a1 trackInfo:(id)a2 completionBlock:(id /* block */)a3;

@end
