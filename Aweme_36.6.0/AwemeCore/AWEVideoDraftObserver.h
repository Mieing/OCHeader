@class NSString;

@interface AWEVideoDraftObserver : NSObject <ACCDraftMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)draftHasTransitionedNormalByUserWithDraftId:(id)a0 launchFrom:(unsigned long long)a1 extraInfo:(id)a2;
- (void)recordDraftVisibleByUserWithId:(id)a0 launchFrom:(unsigned long long)a1;
- (void)removeRedundantDraftCopyed:(id)a0 extraInfo:(id)a1;
- (void)clearNoteUnusedAIGCResultWithDraftId:(id)a0;
- (id)init;

@end
