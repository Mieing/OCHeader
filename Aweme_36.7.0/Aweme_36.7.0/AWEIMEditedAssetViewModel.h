@class NSMutableDictionary;

@interface AWEIMEditedAssetViewModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *editedModelMap;

- (id)editedExchangeImageCroppedIMLocoalAssetForIdentifier:(id)a0 associatedAsset:(id)a1;
- (id)editedIMLocoalAssetForIdentifier:(id)a0 associatedAsset:(id)a1;
- (void)saveEditedAssetForIdentifiers:(id)a0 associatedAssets:(id)a1;
- (id)editedModelForIdentifier:(id)a0;
- (void)saveEditedAssetForIdentifiers:(id)a0 associatedAssets:(id)a1 completion:(id /* block */)a2;
- (void)updateEditedMediaPath:(id)a0 userInfo:(id)a1 forAsset:(id)a2 disableVideo:(BOOL)a3;
- (void)removeEditedModelForIdentifier:(id)a0;
- (void)removeAllEditedModel;
- (void).cxx_destruct;
- (id)init;

@end
