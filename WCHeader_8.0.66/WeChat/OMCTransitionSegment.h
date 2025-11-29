@class OMCTransitionDesc, NSString;

@interface OMCTransitionSegment : OMCSegment <OMCTransitionAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMSTransitionSegment> { struct XMSTransitionSegment *x0; } backingTransitionSegment;
@property (retain, nonatomic) OMCTransitionDesc *transitionDesc;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) BOOL isTransitionEnabled;
@property (readonly, nonatomic) BOOL isBlankTransition;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } usableDurationRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
