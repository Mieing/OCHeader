@class NSString;

@interface IESSCMetalRenderBuffer : NSObject

@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long bufferIndex;

+ (id)standardTextureCoordinate;
+ (id)standardImageVertices;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 bufferIndex:(unsigned long long)a2;
- (void)updateBytes:(const void *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
