@class NSArray, NSString, NSMutableDictionary;

@interface AWEDCardFrequencyIntercepter : NSObject

@property (copy, nonatomic) NSArray *poiIDs;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) NSMutableDictionary *freqRulesInMem;

+ (id)shared;

- (BOOL)p_processInfoForPID:(int)a0 procInfo:(struct kinfo_proc { struct extern_proc { union { struct { struct proc *x0; struct proc *x1; } x0; struct timeval { long long x0; int x1; } x1; } x0; struct vmspace *x1; struct sigacts *x2; int x3; char x4; int x5; int x6; int x7; char *x8; void *x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; void *x15; char *x16; unsigned int x17; unsigned int x18; struct itimerval { struct timeval { long long x0; int x1; } x0; struct timeval { long long x0; int x1; } x1; } x19; struct timeval { long long x0; int x1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; int x24; struct vnode *x25; int x26; struct vnode *x27; int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned char x32; unsigned char x33; char x34; char x35[17]; struct pgrp *x36; struct user *x37; unsigned short x38; unsigned short x39; struct rusage *x40; } x0; struct eproc { struct proc *x0; struct session *x1; struct _pcred { char x0[72]; struct ucred *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; } x2; struct _ucred { int x0; unsigned int x1; short x2; unsigned int x3[16]; } x3; struct vmspace { int x0; char *x1; int x2[5]; char *x3[3]; } x4; int x5; int x6; short x7; int x8; int x9; struct session *x10; char x11[8]; int x12; short x13; short x14; short x15; int x16; char x17[12]; int x18[4]; } x1; } *)a1;
- (BOOL)acceptDCard:(id)a0;
- (int)dcardsAcceptionBitsForContainerType:(long long)a0;
- (void)testFreqControlWithAwemeModel:(id)a0 testResult:(id *)a1;
- (void)deleteLocalFreqStrategiesIfNeeded;
- (void)setFreqRules:(id)a0 ofContainer:(long long)a1;
- (id)persistenceKey:(long long)a0;
- (int)dcardsAcceptionBitsForContainerType:(long long)a0 rejectReason:(id *)a1;
- (id)allCardsAcceptResultWithContainerType:(long long)a0;
- (double)reportBitsRateForType:(long long)a0;
- (id)freqRulesOfContainerType:(long long)a0;
- (id)allAcceptBitsRules:(long long)a0;
- (id)acceptBitsRulesOfContainerType:(long long)a0 scene:(id)a1;
- (BOOL)acceptDCardWithScene:(id)a0 usingFreqControlRules:(id)a1 usingAcceptBitsRules:(id)a2 rejectReason:(id *)a3;
- (id)selectValidStats:(id)a0 usingFreqStrategy:(id)a1;
- (BOOL)hitFreqStrategy:(id)a0 withTargetStats:(id)a1;
- (BOOL)acceptDCard:(id)a0 rejectReason:(id *)a1;
- (id)selectLastNHours:(id)a0 usingFreqStrategy:(id)a1;
- (id)selectLastNExposed:(id)a0 usingFreqStrategy:(id)a1;
- (id)selectToday:(id)a0 usingFreqStrategy:(id)a1;
- (id)selectFromAppLaunch:(id)a0 usingFreqStrategy:(id)a1;
- (id)selectLastNMinutes:(id)a0 usingFreqStrategy:(id)a1;
- (void)updateFreqRules:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)processStartTime;

@end
