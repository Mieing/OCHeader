@class XBusBufferMetadata, NSData;

@interface XBusBuffer : NSObject

@property (retain, nonatomic) XBusBufferMetadata *metadata;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long arg;

- (id)initWithDict:(id)a0 dataType:(int)a1;
- (id)initWithObject:(id)a0 dataType:(int)a1;
- (id)toJSONBuffer;
- (id)toMsgPackBuffer;
- (struct Buffer { struct ScopedRefptr<xbus::ByteArray> { struct ByteArray *x0; } x0; struct Metadata { int x0; int x1; int x2; int x3; } x1; unsigned long long x2; })toBuffer;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBuffer:(struct Buffer { struct ScopedRefptr<xbus::ByteArray> { struct ByteArray *x0; } x0; struct Metadata { int x0; int x1; int x2; int x3; } x1; unsigned long long x2; })a0;

@end
