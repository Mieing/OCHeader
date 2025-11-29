@class NSString, ACCTemplateStickerGeometryModel;

@interface ACCImageAlbumItemTemplateStickerInfo : ACCImageAlbumItemDraftResourceRestorableModel

@property (copy, nonatomic) ACCTemplateStickerGeometryModel *geometryModel;
@property (copy, nonatomic) NSString *layerId;
@property (nonatomic) BOOL isText;
@property (copy, nonatomic) NSString *effectId;

- (void).cxx_destruct;

@end
