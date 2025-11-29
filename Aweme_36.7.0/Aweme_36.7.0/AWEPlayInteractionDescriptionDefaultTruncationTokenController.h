@class NSString;

@interface AWEPlayInteractionDescriptionDefaultTruncationTokenController : NSObject <AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calculateTruncationTokenWithContext:(id)a0;
- (BOOL)shouldReLayoutForRendererDidCalculateNumberOfLinesWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (BOOL)isStoryWithModel:(id)a0;
- (id)handleLineFeedAndSpace:(id)a0;
- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forString:(id)a1;

@end
