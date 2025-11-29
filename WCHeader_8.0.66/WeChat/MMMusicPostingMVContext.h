@class MVStat22259, NSString, NSMutableDictionary, MMMusicMVModel, NSMutableArray;

@interface MMMusicPostingMVContext : NSObject <MMImageLoaderObserver>

@property (retain, nonatomic) NSMutableDictionary *localVideoToUploadDic;
@property (copy, nonatomic) id /* block */ commitCompletion;
@property (retain, nonatomic) NSMutableArray *localVideoToUploadArray;
@property (retain, nonatomic) NSMutableArray *localPicToUploadArray;
@property (retain, nonatomic) NSString *baseDraftLocalId;
@property (nonatomic) BOOL hasEditedInFixMode;
@property (nonatomic) BOOL hasEditedInFlexMode;
@property (retain, nonatomic) MMMusicMVModel *mvModel;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) MVStat22259 *editInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isReadyToPost;
- (BOOL)isDirty;
- (unsigned long long)dirtyCount;
- (void)discardPostingAtIndex:(unsigned long long)a0;
- (void)addLocalVideoToUploadIfNeeded:(id)a0;
- (id)firstEditedTrackItem;
- (void)commitAsDraft:(BOOL)a0 customCover:(id)a1 completion:(id /* block */)a2;
- (void)calculateOriginalInfoAndCompletionInfo;
- (void)realFinishCommitmentIfCan;
- (void)finishCommitmentWithCalculatedOriginality:(float)a0 andCompletion:(float)a1;
- (void)finishCommitmentWithSavedLocalThumbFilename:(id)a0;
- (void)removeUploadedLocalVideoWithId:(id)a0;
- (void)handleUploadingFailureWithLocalVideoId:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
