@class NLETrackSlot_OC;

@interface DVEVideoTransitionModel : NSObject

@property (retain, nonatomic) NLETrackSlot_OC *relatedSlot;
@property (retain, nonatomic) NLETrackSlot_OC *nextSlot;

- (id)initWithRelatedSlot:(id)a0 nextSlot:(id)a1;
- (void).cxx_destruct;

@end
