@class NSString;
@protocol ACCPublishRepository;

@interface ACCRepoTrimCropModel : NSObject <NSCopying, ACCRepositoryContextDeprecated>

@property (nonatomic) unsigned long long subPathType;
@property (nonatomic) BOOL isTrimCropDraft;
@property (nonatomic) BOOL hasCropped;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) BOOL hasTrimed;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)hasEditedAtCropPage;
- (void)generateSubPathType;
- (BOOL)enterEditorAutoPlay;
- (void)clearAllTrimCropInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
