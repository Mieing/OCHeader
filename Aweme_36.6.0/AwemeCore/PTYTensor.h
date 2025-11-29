@class NSArray, NSString;

@interface PTYTensor : PTYCls

@property (nonatomic) void *rawData;
@property (nonatomic) BOOL autoFreeRawData;
@property (nonatomic) unsigned long long dataFormat;
@property (nonatomic) unsigned long long dataType;
@property (copy, nonatomic) NSArray *dims;
@property (nonatomic) int fraction;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) int nelems;

- (id)initWithCoreObject:(const void *)a0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end
