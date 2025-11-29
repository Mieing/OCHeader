@class NSData;

@interface WABufferObject : NSObject

@property (nonatomic) void *buffer;
@property (nonatomic) long long length;
@property (nonatomic) struct OpaqueJSValue { } *jsObject;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;

@end
