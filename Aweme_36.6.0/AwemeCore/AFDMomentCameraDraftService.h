@class NSString, NSMutableArray, NSArray;

@interface AFDMomentCameraDraftService : NSObject <AWEUserMessage, CECDraftService>

@property (retain, nonatomic) NSMutableArray *draftIDArray;
@property (retain, nonatomic) NSMutableArray *draftModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *draftModels;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)removeDraftID:(id)a0 completion:(id /* block */)a1;
- (BOOL)extendDraftValidityWithDraftID:(id)a0 UserID:(id)a1;
- (void)removeDraft:(id)a0 completion:(id /* block */)a1;
- (void)loadDrafts;
- (void)removeLocalStorageForDraftModel:(id)a0;
- (void)setPublishSuccessWithDraftID:(id)a0;
- (void)addDraft:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
