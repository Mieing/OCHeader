@class NSString;

@interface ACCImageAlbumNoteAlbumEntranceManager : HTSService <ACCImageAlbumNoteAlbumEntranceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)entranceAlbum:(id)a0 shootWay:(id)a1 enterFrom:(id)a2 trackInfo:(id)a3 finishBlock:(id /* block */)a4;
+ (id)createNavigationViewWithTopRightCornerType:(unsigned long long)a0 themeType:(long long)a1 shootWay:(id)a2;
+ (void)configInputDataForUploadType:(id)a0;


@end
