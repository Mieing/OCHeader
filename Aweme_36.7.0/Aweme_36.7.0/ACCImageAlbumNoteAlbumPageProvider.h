@protocol AWEStudioPicTemplateShootEntranceConfig;

@interface ACCImageAlbumNoteAlbumPageProvider : NSObject

@property (retain, nonatomic) id<AWEStudioPicTemplateShootEntranceConfig> albumInputConfig;

+ (id)sharedManager;

- (id)previewBottomView;
- (void)openAlbum:(id)a0 shootWay:(id)a1 enterFrom:(id)a2 trackInfo:(id)a3;
- (id)extraInfoWithShootWay:(id)a0 enterFrom:(id)a1 trackInfo:(id)a2;
- (void).cxx_destruct;
- (id)defaultConfig;
- (id)bottomView;

@end
