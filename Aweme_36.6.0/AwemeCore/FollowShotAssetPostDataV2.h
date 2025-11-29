@class FollowShotTextOnImgAssetV2, FollowShotCaptionAssetV2;

@interface FollowShotAssetPostDataV2 : GPBMessage

@property (retain, nonatomic) FollowShotTextOnImgAssetV2 *textOnImgAsset;
@property (nonatomic) BOOL hasTextOnImgAsset;
@property (retain, nonatomic) FollowShotCaptionAssetV2 *captionAsset;
@property (nonatomic) BOOL hasCaptionAsset;

+ (id)descriptor;

@end
