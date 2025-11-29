@class NSString;

@interface WCFinderCompressImageConfig : NSObject

@property (nonatomic) double heightResolution;
@property (nonatomic) double widthResolution;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) double defaultRate;
@property (nonatomic) double maxSize;

- (id)initWithType:(unsigned long long)a0 resolution:(id)a1 defaultRate:(double)a2 maxSize:(double)a3;
- (id)description;
- (void).cxx_destruct;

@end
