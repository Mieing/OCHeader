@class APCDTOCanvas, NSString, NSObject, NSURL, IESMMCanvasConfig, NSNumber, IESMMCanvasSource;
@protocol ACCVideoDataEditCanvasStateProtocol, ACCPublishRepository, ACCVideoDataPublishCanvasStateProtocol;

@interface ACCRepoCanvasModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepoRegister, NSCopying, ACCRepositoryContextDeprecated, ACCRepoCanvasData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long canvasContentType;
@property (retain, nonatomic) NSNumber *minimumScale;
@property (retain, nonatomic) NSNumber *maximumScale;
@property (retain, nonatomic) IESMMCanvasConfig *config;
@property (retain, nonatomic) IESMMCanvasSource *source;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) NSNumber *expectInputVideoDuration;
@property (retain, nonatomic) NSNumber *singlePhotoSaveAsVideoMaxDuration;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) APCDTOCanvas *canvasConfig;
@property (nonatomic) BOOL imagePreferred;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullDisplayFrame;
@property (nonatomic) BOOL needResetEditCanvasScale;
@property (retain, nonatomic) NSObject<ACCVideoDataEditCanvasStateProtocol> *editCanvasState;
@property (retain, nonatomic) NSObject<ACCVideoDataPublishCanvasStateProtocol> *publishCanvasState;
@property (copy, nonatomic) NSString *editCanvasConfigName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_imageQualityTrackParams;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
