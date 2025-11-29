@class NSProgress, NSMutableArray;

@interface IESGurdDownloadProgressObject : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSMutableArray *progressBlocks;

+ (id)object;

- (void)startObservingWithProgress:(id)a0;
- (void)addProgressBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
