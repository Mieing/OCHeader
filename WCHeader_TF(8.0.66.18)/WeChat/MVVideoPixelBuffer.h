@class MAVVLogInputTexture;

@interface MVVideoPixelBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *cvPixelBuffer;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long rotate;
@property (nonatomic) double createTimeStamp;
@property (nonatomic) long long pts;
@property (nonatomic) long long videoId;
@property (nonatomic) long long originalPts;
@property (retain, nonatomic) MAVVLogInputTexture *inputTexture;

- (void)dealloc;
- (id)initWithCvPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
