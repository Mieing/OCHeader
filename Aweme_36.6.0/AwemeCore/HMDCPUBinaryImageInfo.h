@class NSDictionary, NSMutableDictionary;

@interface HMDCPUBinaryImageInfo : NSObject

@property (copy, nonatomic) NSDictionary *binaryMap;
@property (nonatomic) BOOL isBinaryLoad;
@property (retain, nonatomic) NSMutableDictionary *cpuArchMap;

- (id)getCPUArchWithMajor:(int)a0 minor:(int)a1;
- (id)getBinaryImage:(id)a0;
- (void)loadBinaryImage;
- (id)getBinaryImagesWithBinaryImages:(id)a0;
- (void).cxx_destruct;

@end
