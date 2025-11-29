@class NSString, UIImage;

@interface AWESearchVisionPauseImageManager : NSObject

@property (copy, nonatomic) NSString *rootPath;
@property (retain, nonatomic) UIImage *currentPauseImage;

+ (id)shareInstance;

- (id)getFilePathWithFileName:(id)a0;
- (void)removeAllImage;
- (void)saveImage:(id)a0 filePath:(id)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)addObserver;

@end
