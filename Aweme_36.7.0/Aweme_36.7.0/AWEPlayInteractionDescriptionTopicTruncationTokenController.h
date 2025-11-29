@class NSString;

@interface AWEPlayInteractionDescriptionTopicTruncationTokenController : NSObject <AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adjustTruncationTokenModel:(id)a0 withContext:(id)a1;
- (void)didDisplayDescriptionElement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })predictVisibleRangeWithTruncationTokenModel:(id)a0 parserContext:(id)a1;
- (id)findPriorHashtagDescExtraModelWithContext:(id)a0;
- (id)getAllVisibleHashtagExtraModelWithContext:(id)a0;
- (void)trackHashtagTitleShowWithTextExtraModel:(id)a0 parserContext:(id)a1 inTruncationToken:(BOOL)a2;

@end
