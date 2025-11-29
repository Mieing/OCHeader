@class NSNumber;

@interface ToygerFrame : NSObject <NSCopying>

@property (nonatomic) unsigned long long frameType;
@property (nonatomic) unsigned long long frameFormat;
@property (retain, nonatomic) NSNumber *dataLength;
@property (nonatomic) void *baseAddress;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) long long orientation;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
