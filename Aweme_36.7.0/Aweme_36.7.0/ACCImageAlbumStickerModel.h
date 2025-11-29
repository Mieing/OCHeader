@class NSArray, NSDictionary, NSString, ACCImageAlbumStickerProps;

@interface ACCImageAlbumStickerModel : ACCImageAlbumItemDraftResourceRestorableModel

@property (nonatomic) BOOL needApplyContainer;
@property (nonatomic) long long uniqueId;
@property (readonly, nonatomic) ACCImageAlbumStickerProps *param;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSArray *effectInfo;
@property (copy, nonatomic) NSString *text;

- (BOOL)isCustomerSticker;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
