@class NSArray;

@interface MMTListTransitionData : NSObject

@property (readonly, copy, nonatomic) NSArray *fromObjects;
@property (readonly, copy, nonatomic) NSArray *toObjects;
@property (readonly, copy, nonatomic) NSArray *toSectionControllers;

- (id)initFromObjects:(id)a0 toObjects:(id)a1 toSectionControllers:(id)a2;
- (void).cxx_destruct;

@end
