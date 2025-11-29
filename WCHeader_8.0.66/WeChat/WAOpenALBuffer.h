@class NSString;

@interface WAOpenALBuffer : NSObject {
    int format;
    int size;
    int sampleRate;
    NSString *path;
}

@property (readonly) unsigned int bufferId;
@property (readonly) float duration;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) struct ALCcontext_struct { } *context;

+ (id)cachedBufferWithPath:(id)a0 decodeInfo:(id)a1 appId:(id)a2;
+ (id)getAudioDataWithData:(id)a0 filePath:(id)a1;

- (id)description;
- (id)initWithPath:(id)a0 decodeInfo:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
