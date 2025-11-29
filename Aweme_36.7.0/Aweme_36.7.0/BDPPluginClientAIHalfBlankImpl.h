@class NSString;

@interface BDPPluginClientAIHalfBlankImpl : NSObject <BDPClientAIHalfBlankPluginDelegate, BDPClientAIPluginDelegate>

@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (nonatomic) double excuteBusinessDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL isReady;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)executeGameRendersDetectionWithImage:(id)a0 completion:(id /* block */)a1;
- (void)executeHalfBlankDetectionWithImage:(id)a0 completion:(id /* block */)a1;
- (void)executeClassifyDetectionWithImage:(id)a0 completion:(id /* block */)a1;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })cvMatFromUIImage:(id)a0;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })preproccess_load_failed:(struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void)trackTecnicaWithError:(id)a0 excuteBusinessDuration:(double)a1 success:(BOOL)a2 isHalfBlank:(BOOL)a3 business:(id)a4;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })preprocess_load_failed_v1:(struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void).cxx_destruct;
- (id)init;

@end
