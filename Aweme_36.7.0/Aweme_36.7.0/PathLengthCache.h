@class NSMutableArray;

@interface PathLengthCache : NSObject

@property (nonatomic) double totalLength;
@property (retain, nonatomic) NSMutableArray *segmentLengths;

- (void)addSegmentLength:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
