@class NSMutableDictionary, NSMutableArray, AlgorithmResultUnion;

@interface BachSystemObject : NSObject

@property long long infoType;
@property (retain) AlgorithmResultUnion *valueResult;
@property (retain) NSMutableArray *vectorResult;
@property (retain) NSMutableDictionary *mapResult;

- (void).cxx_destruct;
- (id)init;

@end
