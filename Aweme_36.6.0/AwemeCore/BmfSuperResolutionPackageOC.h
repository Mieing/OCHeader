@class NSString, BmfParamOC;
@protocol IBmfPackageHandlerOC, IBmfParamOC;

@interface BmfSuperResolutionPackageOC : NSObject <IBmfSuperResolutionPackageOC> {
    id<IBmfPackageHandlerOC> package_handler_;
    id<IBmfParamOC> package_param_;
    BmfParamOC *sr_param_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtraInfo:(int)a0 :(int)a1 :(int)a2 :(id)a3 :(int)a4 :(int)a5 :(id)a6 :(BOOL)a7 :(struct BmfPackageSrInitExtraInfo { id x0; id x1; id x2; int x3; } *)a8;
- (struct BmfPackageSrData { struct __CVBuffer *x0; id x1; id x2; id x3; void *x4; BOOL x5; } *)processVideo:(struct __CVBuffer { } *)a0 WithExtraInfo:(struct BmfPackageSrExtraInfo { struct BmfPackageRect { int x0; int x1; int x2; int x3; } x0; struct BmfPackageSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; } *)a1 AndExtraMode:(int)a2;
- (struct BmfPackageSrData { struct __CVBuffer *x0; id x1; id x2; id x3; void *x4; BOOL x5; } *)processWithExtraInfo:(void **)a0 :(int *)a1 :(int)a2 :(int)a3 :(int)a4 :(int)a5 :(struct BmfPackageSrExtraInfo { struct BmfPackageRect { int x0; int x1; int x2; int x3; } x0; struct BmfPackageSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; } *)a6 :(int)a7;
- (int)retainBmfPackageSrData:(struct BmfPackageSrData { struct __CVBuffer *x0; id x1; id x2; id x3; void *x4; BOOL x5; } *)a0;
- (void).cxx_destruct;

@end
