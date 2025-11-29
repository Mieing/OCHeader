@class NSMutableArray;

@interface WCStackTracePool : NSObject {
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    float *m_stackCPU;
    BOOL *m_stackInBackground;
    unsigned long long m_poolTailPoint;
    unsigned long long m_maxStackCount;
}

@property (retain, nonatomic) NSMutableArray *parentAddressFrame;

- (id)init;
- (id)initWithMaxStackTraceCount:(unsigned long long)a0;
- (void)dealloc;
- (void)addThreadStack:(unsigned long long *)a0 andLength:(unsigned long long)a1 andCPU:(float)a2 isInBackground:(BOOL)a3;
- (id)makeCallTree;
- (id)p_getInfoDictFromAddressFrame:(id)a0;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)a0 length:(unsigned long long)a1 cpu:(float)a2 isInBackground:(BOOL)a3;
- (void)p_addAddressFrame:(id)a0;
- (void)p_mergeAddressFrame:(id)a0 with:(id)a1;
- (void)p_mergedAddressFrameArray:(id)a0 with:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
