@interface IESLiveLandscapePictureSettingStore : NSObject

@property (nonatomic) long long currentSelectType;
@property (nonatomic) BOOL landScapePanelV2Enable;

- (id)pictureFitTypes;
- (id)titleForPictureFitType:(long long)a0;

@end
