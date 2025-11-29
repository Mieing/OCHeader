@class NSString;

@interface MMGCRootsTracingIvarReference : NSObject <MMGCRootsTracingObjectReference>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) struct objc_ivar { } *ivar;
@property (nonatomic) BOOL isStrong;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIvar:(struct objc_ivar { } *)a0;
- (unsigned long long)_convertEncodingToType:(const char *)a0;
- (unsigned long long)indexInIvarLayout;
- (id)objectReferenceFromObject:(id)a0;
- (id)namePath;
- (void).cxx_destruct;

@end
