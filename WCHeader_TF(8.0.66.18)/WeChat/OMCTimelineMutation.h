@class NSArray;

@interface OMCTimelineMutation : NSObject

@property (readonly, nonatomic) NSArray *addedMutationInfos;
@property (readonly, nonatomic) NSArray *removedMutationInfos;
@property (readonly, nonatomic) NSArray *changedMutationInfos;

- (id)initWithBackingMutationInfo:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
