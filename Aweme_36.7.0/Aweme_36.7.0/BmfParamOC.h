@class NSString;

@interface BmfParamOC : NSObject <IBmfParamOC> {
    void *bmf_param_ptr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getInt:(long long)a0 :(int *)a1;
- (int)setLong:(long long)a0 :(long long)a1;
- (int)getLong:(long long)a0 :(long long *)a1;
- (int)getFloat:(long long)a0 :(float *)a1;
- (int)setDouble:(long long)a0 :(double)a1;
- (int)getDouble:(long long)a0 :(double *)a1;
- (int)getString:(long long)a0 :(id *)a1;
- (int)setIntList:(long long)a0 :(int *)a1 :(int)a2;
- (int)getIntList:(long long)a0 :(int **)a1 :(int *)a2;
- (int)setFloatList:(long long)a0 :(float *)a1 :(int)a2;
- (int)getFloatList:(long long)a0 :(float **)a1 :(int *)a2;
- (int)setDoubleList:(long long)a0 :(double *)a1 :(int)a2;
- (int)getDoubleList:(long long)a0 :(double **)a1 :(int *)a2;
- (int)setInt:(long long)a0 :(int)a1;
- (int)setString:(long long)a0 :(id)a1;
- (int)setFloat:(long long)a0 :(float)a1;
- (void *)getNativePtr;
- (id)init;
- (void)dealloc;

@end
