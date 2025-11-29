@class NSString;

@interface AWEPlayInteractionPreloadViewController : AWEPlayInteractionViewController <AWEPlayInteractionPreloadViewController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)silentUpdate;
- (BOOL)isRichContentWithAwemeModel:(id)a0 referString:(id)a1;
- (id)initWithModel:(id)a0 referString:(id)a1;
- (void)configWithModelBeforeUpdate;
- (void)hideInteractionElementIfNeeded;
- (void)hideLeftInteractionIfNeeded;
- (void)hideRightInteractionIfNeeded;
- (void)hideBottomInteractionIfNeeded;

@end
