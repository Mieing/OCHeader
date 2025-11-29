@class NSMutableArray;

@interface AWEStudioImageCompressManager : NSObject

@property (class, readonly, nonatomic) AWEStudioImageCompressManager *shared;

@property (readonly, nonatomic) NSMutableArray *instances;

+ (id)compressImage:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2;

- (void)safe_start:(id)a0 block:(id /* block */)a1;
- (void)startWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
