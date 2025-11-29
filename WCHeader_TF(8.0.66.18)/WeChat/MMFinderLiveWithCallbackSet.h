@class NSSet, NSMutableSet;

@interface MMFinderLiveWithCallbackSet : NSObject

@property (retain, nonatomic) NSMutableSet *realSet;
@property (readonly, copy, nonatomic) NSSet *values;
@property (copy, nonatomic) id /* block */ callback;

- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void).cxx_destruct;

@end
