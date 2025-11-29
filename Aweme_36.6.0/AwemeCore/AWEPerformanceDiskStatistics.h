@interface AWEPerformanceDiskStatistics : NSObject

@property (nonatomic) unsigned long long appSize;
@property (nonatomic) double totalSize;
@property (nonatomic) double freeSize;

+ (id)appropriateSize:(unsigned long long)a0;
+ (BOOL)useNewSizeFormat;

- (void)calculateOverallSizeWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)useAllocatedDiskSize;
- (void)calculateSizeInPaths:(id)a0 completion:(id /* block */)a1;
- (void)_calculateOverallSizeWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (double)folderSizeAtPath:(id)a0;

@end
