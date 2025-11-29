@class ACCImportMaterialFixedSlotInfo, NSString, NSArray, CAKAlbumAssetModel, ACCTemplateAlbumClipInfo, NSNumber, UIImage;

@interface ACCImportMaterialSelectCollectionViewCellModel : NSObject

@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (nonatomic) double duration;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL shouldShowDuration;
@property (nonatomic) BOOL shouldAlwaysShowDuration;
@property (nonatomic) BOOL cancelDurationLimit;
@property (nonatomic) BOOL shouldChangeCellColor;
@property (copy, nonatomic) NSString *gameplayAlgorithm;
@property (copy, nonatomic) NSString *algorithmHintString;
@property (copy, nonatomic) NSString *bgIconName;
@property (retain, nonatomic) NSArray *cloneSlotIndex;
@property (retain, nonatomic) NSNumber *shouldDisableVideo;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) long long livePhotoState;
@property (copy, nonatomic) NSString *forbidChangeLivePhotoStateText;
@property (retain, nonatomic) ACCTemplateAlbumClipInfo *albumClipInfo;
@property (retain, nonatomic) UIImage *cropedCoverImage;
@property (nonatomic) BOOL hasEdit;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) long long resourceClipStart;
@property (nonatomic) long long resourceClipEnd;
@property (nonatomic) long long slotWidth;
@property (nonatomic) long long slotHeight;
@property (copy, nonatomic) NSString *alignMode;
@property (nonatomic) BOOL isFixedSlot;
@property (retain, nonatomic) ACCImportMaterialFixedSlotInfo *fixedSlotInfo;

- (void).cxx_destruct;

@end
