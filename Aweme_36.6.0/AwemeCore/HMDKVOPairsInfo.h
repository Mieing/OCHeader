@class NSMutableArray, NSObject;

@interface HMDKVOPairsInfo : NSObject

@property (readonly, weak, nonatomic) NSObject *HMDObservee;
@property (readonly, nonatomic) void *HMDObserveePtr;
@property (readonly, nonatomic) Class HMDObserveeClass;
@property (readonly, nonatomic) NSMutableArray *pairList;

- (id)initWithObservee:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
