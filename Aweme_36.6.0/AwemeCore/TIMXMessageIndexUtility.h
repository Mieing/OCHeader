@class NSString, TIMXSDKInstance;

@interface TIMXMessageIndexUtility : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getIndexInfoInMessages:(id)a0 indexV2Base:(long long)a1;
+ (id)getIndexInfoInPBMessages:(id)a0 indexV2Base:(long long)a1;

- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 inConversation:(id)a2 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 includeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 intersectantRangeStrs:(id)a5;
- (BOOL)checkContinousInRangeWithMinIndexV2:(long long)a0 maxIndexV2:(long long)a1 emptyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 intersectantRangeStrs:(id)a3 withIndexV2Base:(long long)a4 currentMinIndexV2:(long long)a5 currentMaxIndexV2:(long long)a6 conversationId:(id)a7;
- (BOOL)isContinuousWithPreviousRange:(id)a0 intersectantRangeStrs:(id)a1 currentMinIndexV2:(long long)a2 currentMaxIndexV2:(long long)a3;
- (BOOL)checkStrictlyContinuous:(id)a0 intersectantRangeStrs:(id)a1;
- (void)filterMessagesMaxContinueWithValidMsges:(id)a0 conversationId:(id)a1 shouldCombineInValidMsges:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)calMergingRange:(id)a0 ranges:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
