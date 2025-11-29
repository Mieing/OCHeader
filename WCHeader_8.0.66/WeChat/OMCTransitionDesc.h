@class NSString;

@interface OMCTransitionDesc : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMSTransitionDesc> { struct XMSTransitionDesc *_ptr; } backingTransitionDesc;
@property (readonly, nonatomic) NSString *transitionID;
@property (readonly, nonatomic) BOOL isOverlapped;
@property (readonly, nonatomic) BOOL isBlankTransition;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } suggestedTotalDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } suggestedTransInDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } suggestedTransOutDuration;

- (id)initWithTransitionID:(id)a0;
- (id)initWithBackingTransitionDesc:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
