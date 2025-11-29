@class NSString;

@interface AWEMusicPlaylistEditUploadService : NSObject

@property (retain, nonatomic) NSString *coverURL;

+ (id)sharedInstance;

- (void)uploadPlaylistModel:(id)a0 originalInfo:(id)a1 isMiniLuna:(BOOL)a2 completion:(id /* block */)a3;
- (void)notifyPlaylistChangedWithModel:(id)a0 originalInfo:(id)a1;
- (void)uploadToPictureBedWithImage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
