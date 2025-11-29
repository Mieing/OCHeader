@class NSArray, NSDictionary;

@interface PTYMemoryViewBuffer : PTYCls

@property (nonatomic) void *rawData;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL autoFreeRawData;
@property (nonatomic) BOOL readOnly;
@property (copy, nonatomic) NSArray *shape;
@property (copy, nonatomic) NSDictionary *customInfo;

- (id)initWithCoreObject:(const void *)a0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end
