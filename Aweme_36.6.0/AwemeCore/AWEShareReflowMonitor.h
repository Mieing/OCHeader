@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEShareReflowMonitor : NSObject <AWERouterDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (retain, nonatomic) NSMutableDictionary *stageTrackCount;
@property (retain, nonatomic) NSString *lastStage;
@property (nonatomic) double lastTrackTime;
@property (nonatomic) BOOL hasEnterBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (double)p_processStartTime;
- (BOOL)p_processInfoForPID:(int)a0 procInfo:(struct kinfo_proc { struct extern_proc { union { struct { struct proc *x0; struct proc *x1; } x0; struct timeval { long long x0; int x1; } x1; } x0; struct vmspace *x1; struct sigacts *x2; int x3; char x4; int x5; int x6; int x7; char *x8; void *x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; void *x15; char *x16; unsigned int x17; unsigned int x18; struct itimerval { struct timeval { long long x0; int x1; } x0; struct timeval { long long x0; int x1; } x1; } x19; struct timeval { long long x0; int x1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; int x24; struct vnode *x25; int x26; struct vnode *x27; int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned char x32; unsigned char x33; char x34; char x35[17]; struct pgrp *x36; struct user *x37; unsigned short x38; unsigned short x39; struct rusage *x40; } x0; struct eproc { struct proc *x0; struct session *x1; struct _pcred { char x0[72]; struct ucred *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; } x2; struct _ucred { int x0; unsigned int x1; short x2; unsigned int x3[16]; } x3; struct vmspace { int x0; char *x1; int x2[5]; char *x3[3]; } x4; int x5; int x6; short x7; int x8; int x9; struct session *x10; char x11[8]; int x12; short x13; short x14; short x15; int x16; char x17[12]; int x18[4]; } x1; } *)a1;
- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)trackReflowTimingStage:(id)a0;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;

@end
