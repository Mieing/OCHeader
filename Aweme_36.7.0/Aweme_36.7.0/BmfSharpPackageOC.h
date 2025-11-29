@class NSString, BmfParamOC;
@protocol IBmfPackageHandlerOC, IBmfParamOC;

@interface BmfSharpPackageOC : NSObject <IBmfSharpPackageOC> {
    id<IBmfPackageHandlerOC> package_handler_;
    id<IBmfParamOC> package_param_;
    BmfParamOC *sr_param_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(int)a0 :(float)a1 :(float)a2 :(float)a3 :(float)a4 :(float)a5 :(BOOL)a6 :(BOOL)a7;
- (id)initWithPoolSize:(int)a0 :(int)a1 :(float)a2 :(float)a3 :(float)a4 :(float)a5 :(float)a6 :(BOOL)a7 :(BOOL)a8;
- (int)process:(struct __CVBuffer { } *)a0 GetResult:(struct BmfPackageSharpData **)a1 WithExtraInfo:(struct BmfPackageSharpExtraInfo { int x0; float x1; float x2; float x3; float x4; float x5; BOOL x6; BOOL x7; } *)a2 AndExtraMode:(int)a3;
- (int)giveBackBuffer:(struct BmfPackageSharpData { struct __CVBuffer *x0; id x1[3]; void *x2; } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
