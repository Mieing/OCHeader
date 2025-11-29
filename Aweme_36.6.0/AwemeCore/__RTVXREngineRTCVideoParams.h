@class NSNumber;

@interface __RTVXREngineRTCVideoParams : JSONModel

@property (retain, nonatomic) NSNumber *videoParamMode;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)keyMapper;

- (void)__setupDefaultValue:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
