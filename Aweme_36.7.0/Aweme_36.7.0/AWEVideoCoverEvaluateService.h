@class NSString;

@interface AWEVideoCoverEvaluateService : HTSService <AWEVideoCoverEvaluateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualBetweenEvaluatedImage:(id)a0 savedImage:(id)a1;
- (BOOL)shouldPreEvaluateCover;
- (BOOL)shouldShowEvaluateAiCover;

@end
