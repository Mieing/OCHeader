@interface MMFinderI420Frame : NSObject {
    struct __CFData { } *_cfData;
    char *_planeData[3];
    unsigned long long _stride[3];
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int i420DataLength;
@property (nonatomic) unsigned long long timetag;
@property (readonly, nonatomic) char *data;

+ (id)initWithData:(id)a0;

- (void)getBytesQueue:(id /* block */)a0;
- (id)bytes;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (char *)dataOfPlane:(unsigned long long)a0;
- (unsigned long long)strideOfPlane:(unsigned long long)a0;
- (void)freeData;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)convertToSampleBuffer;

@end
