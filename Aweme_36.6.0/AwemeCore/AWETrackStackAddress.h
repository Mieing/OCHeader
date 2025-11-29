@class NSMutableArray;

@interface AWETrackStackAddress : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rangeLock;
}

@property (retain, nonatomic) NSMutableArray *rangeArr;
@property (nonatomic) int aweTrackBacktraceStep;
@property (nonatomic) int bdTrackProtocolBacktraceStep;
@property (nonatomic) int backtraceDepth;

+ (id)backtraceStackAddress;
+ (void)awetrack_eventV3:(id)a0 params:(id)a1;
+ (id)appNumber;
+ (id)appVersion;
+ (id)sharedInstance;

- (id)slidedStackAddrWithStack:(id)a0 FromStep:(int)a1 ForDepth:(int)a2;
- (id)locateAddr:(unsigned long long)a0 ToImage:(id)a1;
- (void)addLockedRangeArrWithRange:(id)a0;
- (void)addImageListListener;
- (void).cxx_destruct;
- (id)init;

@end
