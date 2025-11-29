@class NSString, NSArray, NSMutableDictionary, MTLArgument, IESSCMetalRenderBuffer;

@interface IESSCMetalShaderUniformSettings : NSObject

@property (copy, nonatomic) NSString *uniformSettingsKey;
@property (copy, nonatomic) NSArray *arguments;
@property (retain, nonatomic) MTLArgument *argument;
@property (nonatomic) void *structBytes;
@property (retain, nonatomic) NSMutableDictionary *structInfo;
@property (retain, nonatomic) IESSCMetalRenderBuffer *renderBuffer;

- (id)initWithArguments:(id)a0 uniformSettingsKey:(id)a1;
- (void)setFloat2:(SEL)a0 forKey:(id)a1;
- (void)setFloat4:(SEL)a0 forKey:(id)a1;
- (void)setBytes:(void *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)updateUniformLookupTableWithArguments:(id)a0;
- (void)updateRenderBuffer;
- (id)convertToRenderBuffer;
- (void)setFloat3:(SEL)a0 forKey:(id)a1;
- (void)setFloat3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 forKey:(id)a1;
- (void)setFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (void)setInt:(int)a0 forKey:(id)a1;

@end
