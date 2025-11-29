@class NSString, HTSGLContext, NSLock;

@interface VEFeatureOCWrapper : NSObject {
    NSString *description;
}

@property (nonatomic) void *handler;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSLock *refLock;
@property (nonatomic) unsigned long long referenceCount;

- (void)deleteReferenceCount;
- (id)initWithRenderer:(id)a0 handleParameters:(id)a1 context:(id)a2;
- (void)addReferenceCount;
- (void)destroyByEngine:(void *)a0;
- (unsigned long long)getReferenceCount;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
