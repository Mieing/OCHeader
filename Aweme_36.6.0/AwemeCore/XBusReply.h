@class XBusBuffer;

@interface XBusReply : NSObject

@property (retain, nonatomic) XBusBuffer *buffer;
@property (nonatomic) BOOL finish;
@property (nonatomic) BOOL success;
@property (nonatomic) int code;

- (struct Reply { struct Buffer { struct ScopedRefptr<xbus::ByteArray> { struct ByteArray *x0; } x0; struct Metadata { int x0; int x1; int x2; int x3; } x1; unsigned long long x2; } x0; BOOL x1; BOOL x2; int x3; })toReply;
- (void).cxx_destruct;
- (id)init;

@end
