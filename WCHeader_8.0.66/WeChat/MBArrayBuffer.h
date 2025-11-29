@class NSMutableData, NSObject;

@interface MBArrayBuffer : NSObject

@property (nonatomic) int bufferId;
@property (nonatomic) BOOL isTraceBuffer;
@property void *bufferPtr;
@property unsigned long long bufferLength;
@property (retain) NSMutableData *localData;
@property (retain, nonatomic) NSObject *dataRef;
@property (readonly, nonatomic) unsigned long long permission;

- (id)initWithLength:(unsigned int)a0;
- (id)initWithBuffer:(void *)a0 length:(unsigned long long)a1 permission:(unsigned long long)a2 dataRef:(id)a3;
- (id)data;
- (unsigned long long)dataLength;
- (const void *)dataBufferPtr;
- (id)createJSObject:(id)a0;
- (id)createTraceJSObject:(id)a0;
- (BOOL)getWriteableBuffer:(void **)a0 length:(unsigned long long *)a1;
- (BOOL)writeData:(id)a0 offset:(unsigned long long)a1 retWriteLength:(unsigned long long *)a2 retErrno:(unsigned int *)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
