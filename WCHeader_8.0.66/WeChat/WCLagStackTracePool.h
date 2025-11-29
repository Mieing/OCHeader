@class NSMutableArray;

@interface WCLagStackTracePool : NSObject {
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    unsigned long long m_maxStackCount;
}

@property (retain, nonatomic) NSMutableArray *parentAddressFrame;

- (id)initWithStackCyclePool:(unsigned long long **)a0 stackCount:(unsigned long long *)a1 maxStackTraceCount:(unsigned long long)a2;
- (id)makeCallTree;
- (id)p_getInfoDictFromAddressFrame:(id)a0;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)a0 length:(unsigned long long)a1;
- (void)p_addAddressFrame:(id)a0;
- (void)p_mergeAddressFrame:(id)a0 with:(id)a1;
- (void)p_mergedAddressFrameArray:(id)a0 with:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
