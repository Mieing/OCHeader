@class NSString;

@interface ACCMusicPickerFactory : NSObject <ACCMusicPickerFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendListRepositoryWithPublishModel:(id)a0 scene:(long long)a1;
+ (id)musicPickerViewModelWithRecommendListRepository:(id)a0 volumeViewModel:(id)a1 bizHandler:(id)a2 publishModel:(id)a3 serviceProvider:(id)a4 scene:(long long)a5;
+ (id)cameraRecommendListRepository:(id)a0;
+ (id)hotListRepository:(id)a0;
+ (id)recommendListRepository:(id)a0;
+ (BOOL)shouldEnableDefaultMusicList:(id)a0;
+ (id)commonBizParams:(id)a0;
+ (id)recommendExtraParams:(id)a0;
+ (id)hotListV3Repository:(id)a0;
+ (id)favoriteListRepositoryWithPublishModel:(id)a0 scene:(long long)a1;
+ (id)usedListRepositoryWithPublishModel:(id)a0 scene:(long long)a1;
+ (id)importListRepository:(id)a0;
+ (id)toolbarItemsWithPublishModel:(id)a0 serviceProvider:(id)a1;
+ (id)cameraHotListRepository:(id)a0;


@end
