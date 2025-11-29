@class NSString, OMCTransitionDesc, OMCTransitionSegment;

@interface MJTransitionSegmentViewModel : MJSegmentViewModel {
    OMCTransitionSegment *_transitionSegment;
}

@property (nonatomic) BOOL isBlankTransition;
@property (nonatomic) BOOL isTransitionEnabled;
@property (readonly, nonatomic) NSString *transitionID;
@property (readonly, nonatomic) BOOL isOverlapped;
@property (retain, nonatomic) OMCTransitionDesc *transitionDesc;

- (id)initWithTransitionSegment:(id)a0;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithTransitionSegmentImpl;
- (void)syncWithMutationEntry:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
