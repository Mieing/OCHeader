@class NSMutableArray;
@protocol EJFileSystemDelegate;

@interface WAEJFileSystem : NSObject {
    NSMutableArray *_noretainObejcts;
}

@property (weak, nonatomic) id<EJFileSystemDelegate> delegate;

- (void)dealloc;
- (BOOL)isFileExist:(id)a0;
- (id)getFileData:(id)a0;
- (id)getFileDataWithUrl:(id)a0;
- (id)createImageWithSvgData:(id)a0 resize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)addBackground:(id)a0;
- (void)enterForeground;
- (void)cancelAllFileTask;
- (void).cxx_destruct;

@end
