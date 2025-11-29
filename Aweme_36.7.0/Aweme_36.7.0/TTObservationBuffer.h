@class NSMutableArray;

@interface TTObservationBuffer : NSObject

@property (nonatomic) unsigned long long bufferSizeMax;
@property (retain, nonatomic) NSMutableArray *list;

- (unsigned long long)observationCheckByPercent:(id)a0 percent:(float)a1 rttGap:(long long)a2 speedGap:(long long)a3;
- (BOOL)isExistSameCheckResultType:(id)a0;
- (void)addObservation:(id)a0;
- (void)addObservationWithBuffer:(id)a0;
- (id)getAverageObservation:(long long)a0;
- (void)clearBuff;
- (id)getFirstObservation;
- (unsigned long long)getBufferRealSize;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setCapacity:(unsigned long long)a0;

@end
