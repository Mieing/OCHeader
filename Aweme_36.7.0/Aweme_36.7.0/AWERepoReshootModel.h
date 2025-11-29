@class NSString, NSArray, NSValue, NSData, NSMutableArray;
@protocol ACCPublishRepository;

@interface AWERepoReshootModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated, ACCRepoReshootData, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isReshoot;
@property (retain, nonatomic) NSString *fromCreateId;
@property (retain, nonatomic) NSString *fromTaskId;
@property (retain, nonatomic) NSValue *recordVideoClipRange;
@property (nonatomic) double durationBeforeReshoot;
@property (nonatomic) double durationAfterReshoot;
@property (copy, nonatomic) NSArray *markedTimes;
@property (retain, nonatomic) NSMutableArray *fullRangeFragmentInfo;
@property (retain, nonatomic) NSData *recordVideoClipRangeJson;
@property (retain, nonatomic) NSData *fullRangeFragmentInfoJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)repoVideoInfo;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void)p_removeReshootStickerSavePhotos;
- (BOOL)hasVideoClipEdits;
- (unsigned long long)getStickerSavePhotoCount;
- (void)removeVideoClipEdits;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
