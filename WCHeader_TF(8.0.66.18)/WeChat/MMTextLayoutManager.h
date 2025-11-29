@class NSString, NSMutableSet, MMTextLayoutABKey;

@interface MMTextLayoutManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMTextLayoutABKey *abkey;
@property (retain, nonatomic) NSMutableSet *set;
@property (nonatomic) long long errorCount;
@property (nonatomic) unsigned int os;
@property (nonatomic) struct { struct MMTextLayoutParam { struct CGSize { double width; double height; } size; unsigned long long lineBreakStrategy; long long lineBreak; } param; unsigned long long fastCount; unsigned long long sysCount; long long duration; int type; } stat;
@property (nonatomic) long long total;
@property (nonatomic) long long lastTotal;
@property (nonatomic) long long profileCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setup;
- (void)onServiceTerminate;
- (void)addString:(id)a0 font:(id)a1 fastSize:(struct CGSize { double x0; double x1; })a2 stat:(struct { struct MMTextLayoutParam { struct CGSize { double x0; double x1; } x0; unsigned long long x1; long long x2; } x0; unsigned long long x1; unsigned long long x2; long long x3; int x4; })a3;
- (void)profileString:(id)a0 font:(id)a1 fastSize:(struct CGSize { double x0; double x1; })a2 stat:(struct { struct MMTextLayoutParam { struct CGSize { double x0; double x1; } x0; unsigned long long x1; long long x2; } x0; unsigned long long x1; unsigned long long x2; long long x3; int x4; })a3;
- (void)addLog:(id)a0 string:(id)a1 offW:(double)a2 offH:(double)a3 fastSize:(struct CGSize { double x0; double x1; })a4;
- (void)addItem:(id)a0;
- (BOOL)shoudDisableWithAvg:(double)a0;
- (void)report;
- (void)disableByError;
- (void).cxx_destruct;

@end
