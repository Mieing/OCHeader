@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPStarkFontManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedManager;

- (id)checkLocalFileIsExist;
- (void)downloadWithUrl:(id)a0 completionHandler:(id /* block */)a1;
- (id)getLocalMd5Meta;
- (BOOL)writeLocalMd5Meta:(id)a0;
- (id)fontMetaPath;
- (void)downloadSystemFontIfNeededWithCallback:(id /* block */)a0;
- (void)downloadSystemFontIfNeeded;
- (void).cxx_destruct;
- (id)fontPath;

@end
