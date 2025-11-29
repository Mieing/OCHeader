@class NSPointerArray;

@interface AWETrackerDataTransmissionChainModified : NSObject

@property (retain, nonatomic) NSPointerArray *chain;

+ (id)chainFromPointerArray:(id)a0;

- (BOOL)containsWhere:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
