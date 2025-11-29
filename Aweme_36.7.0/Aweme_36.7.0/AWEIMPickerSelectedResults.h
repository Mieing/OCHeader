@class AWEIMEditedAssetViewModel, NSMutableArray, NSMutableDictionary;

@interface AWEIMPickerSelectedResults : NSObject

@property (retain, nonatomic) NSMutableArray *selectedAssetIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *localAssetMap;
@property (retain, nonatomic) NSMutableDictionary *PHAssetMap;
@property (retain, nonatomic) NSMutableDictionary *sendAsLivePhotoIndentifiers;
@property (nonatomic) BOOL useOriginalImage;
@property (retain, nonatomic) AWEIMEditedAssetViewModel *editViewModel;

- (BOOL)shouldSendAsLivePhotoIdentifier:(id)a0;
- (id)phAssetForIdentify:(id)a0;
- (unsigned long long)indexOfAssetIdentifier:(id)a0;
- (void)removeLivePhotoAssetIdentifier:(id)a0;
- (void)removeAssetIdentifier:(id)a0;
- (void)addLivePhotoAssetIdentifier:(id)a0;
- (void)removeAssetIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAsset:(id)a0;
- (BOOL)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;

@end
