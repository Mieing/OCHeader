@class NSMutableDictionary, NSDictionary, NSMutableSet, NSArray;

@interface HMDFlameGraphInfo : NSObject

@property (copy, nonatomic) NSDictionary *binaryMap;
@property (nonatomic) BOOL isBinaryLoad;
@property (retain, nonatomic) NSMutableDictionary *cpuArchMap;
@property (retain, nonatomic) NSMutableSet *imageNameSet;
@property (copy, nonatomic) NSArray *backtraces;

- (void)setupWithParams:(void *)a0;
- (id)getCPUArchWithMajor:(int)a0 minor:(int)a1;
- (void)loadBinaryImage;
- (id)getBinaryImagesWithBinaryImages:(id)a0;
- (void)defaultInitialize;
- (id)initWithBacktraces:(void *)a0;
- (id)initWithBacktraceArray:(id)a0;
- (id)reportArray;
- (id)reportImages;
- (void).cxx_destruct;

@end
