@class NSString, ACCAEDataRepositoryInputData;
@protocol ACCStickerPannelFilterDataSource;

@interface ACCAEStickerPanelFilterImpl : NSObject <ACCStickerPannelFilter>

@property (weak, nonatomic) id<ACCStickerPannelFilterDataSource> dataSource;
@property (retain, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTeenMode;
- (BOOL)isCommerce;
- (id)filterTags;
- (BOOL)isAlbumImage;
- (BOOL)isIMPhoto;
- (BOOL)isInfiniImagePrefferd;
- (id)tagsNeedToRemove;
- (id)ultraCreationBlockStickers;
- (void).cxx_destruct;

@end
