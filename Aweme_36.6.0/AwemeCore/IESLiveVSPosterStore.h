@class HTSEventContext, NSString, UIImage, IESLiveVSPhotoPickerMananger, HTSLiveLikeEggSyncData, HTSLiveTemplateInfo;
@protocol IESLiveRoomService, IESLivePictureProcessService, IESLiveVSPosterStoreReaction;

@interface IESLiveVSPosterStore : NSObject <IESLiveDataSyncDelegate>

@property (nonatomic) unsigned long long panelStatus;
@property (retain, nonatomic) IESLiveVSPhotoPickerMananger *photoMananger;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveLikeEggSyncData *currentData;
@property (retain, nonatomic) id<IESLivePictureProcessService> picProcessService;
@property (retain, nonatomic) UIImage *posterImage;
@property (retain, nonatomic) HTSLiveTemplateInfo *currentTemplate;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveVSPosterStoreReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (id)bgPhoto;
- (void)processImage:(unsigned long long)a0;
- (id)jumpDetail;
- (id)templatePhotoJumpDetail;
- (id)templatePanelTitle;
- (id)photoPanelTitle;
- (id)templateBGUrl;
- (void)saveImageToLocal:(id)a0;
- (void)trackTempleteShowAtIndex:(unsigned long long)a0;
- (id)templateAtIndex:(unsigned long long)a0;
- (id)templateImages;
- (void)showPreView;
- (id)phAssets;
- (void)loadLocalPhotos;
- (void)handleEggSyncData:(id)a0;
- (id)localPhotos;
- (void).cxx_destruct;
- (id)templates;
- (id)assetAtIndex:(unsigned long long)a0;
- (id)initWithRoom:(id)a0;

@end
