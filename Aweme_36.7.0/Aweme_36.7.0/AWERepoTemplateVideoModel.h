@class AWEDTODemonstrationContent, NSString, NSURL;
@protocol ACCPublishRepository;

@interface AWERepoTemplateVideoModel : NSObject <ACCRepoModelDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, NSCopying, ACCRepoTemplateVideoData, ACCRepositoryTrackContextDeprecated, ACCRepositoryContextDeprecated>

@property (retain, nonatomic) AWEDTODemonstrationContent *DTOModel;
@property (nonatomic) BOOL hasTemplateVideo;
@property (nonatomic) BOOL usedTemplateVideo;
@property (nonatomic) double speedForTrack;
@property (retain, nonatomic) NSString *templateVideoRequestURL;
@property (retain, nonatomic) NSString *coverImageRequestURL;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double totalDuration;
@property (retain, nonatomic) NSURL *templateVideoLocalSourceURL;
@property (retain, nonatomic) NSString *templateVideoFilename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (struct CGSize { double x0; double x1; })currentVideoPreviewSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
