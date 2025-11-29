@class OMJID;

@interface OMCSegmentMutation : NSObject

@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly, nonatomic) BOOL isVisualClipChanged;

- (id)initWithBackingMutationInfo:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
