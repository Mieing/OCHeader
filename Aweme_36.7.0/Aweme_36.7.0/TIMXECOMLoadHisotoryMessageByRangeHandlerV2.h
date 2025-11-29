@class TIMXSDKInstance;

@interface TIMXECOMLoadHisotoryMessageByRangeHandlerV2 : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;

+ (id)getHandlerWithInbox:(int)a0 rootObject:(id)a1;

- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
- (void)fetchAllMessagesFromConversationIdentifier:(id)a0 minIndexV2:(long long)a1 maxIndexV2:(long long)a2 shouldCancelBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)remoteLoadMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 direction:(unsigned long long)a2 inConversation:(id)a3 completionBlock:(id /* block */)a4;
- (id)initWithInbox:(int)a0 rootObject:(id)a1;
- (void)_remoteLoadMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 realMinIndexV2:(long long)a2 realMaxIndexV2:(long long)a3 direction:(unsigned long long)a4 inConversation:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 intersectantRangeStrs:(id)a5;
- (BOOL)checkIfNotHasEmptyInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })includeRangeInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2;
- (void)intersectantRangeStrsInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2 intersectantRangeStrs:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })emptyRangeInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2;
- (void)__remoteLoadAllMessagesBetweenMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 realMinIndexV2:(long long)a2 realMaxIndexV2:(long long)a3 inConversation:(id)a4 shouldCancelBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (BOOL)checkContinuosWithPreRangeWithLastSortedMaxIndexV2:(long long)a0 currentMinIndexV2:(long long)a1 currentMaxIndexV2:(long long)a2 intersectantRangeStrs:(id)a3;
- (BOOL)checkSortedIndexV2AllInIntersectantRangeWithSortedIndexV2Arr:(id)a0 intersectantRangeStrs:(id)a1;
- (BOOL)checkCurrentMsgesHaveIndexV2WithCurrentMinIndexV2:(long long)a0;
- (BOOL)checkStrictlyContinuosWithIndexV2Arr:(id)a0 currentMinIndexV2:(long long)a1 currentMaxIndexV2:(long long)a2 intersectantRangeStrs:(id)a3;
- (void).cxx_destruct;

@end
