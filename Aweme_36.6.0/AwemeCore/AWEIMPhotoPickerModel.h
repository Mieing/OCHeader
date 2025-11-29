@class NSArray, NSMutableDictionary, NSMutableArray, AWEIMEditedAssetViewModel;

@interface AWEIMPhotoPickerModel : NSObject

@property (retain, nonatomic) NSMutableArray *selectedImageIds;
@property (retain, nonatomic) NSMutableDictionary *phassetsMap;
@property (retain, nonatomic) NSMutableDictionary *sendAsLivePhotoIndentifiers;
@property (readonly, nonatomic) NSArray *assetIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (nonatomic) unsigned long long maxAssetCount;
@property (nonatomic) BOOL useOriginalImage;
@property (nonatomic) BOOL watchOnce;
@property (nonatomic) BOOL isExchangeImage;
@property (retain, nonatomic) AWEIMEditedAssetViewModel *editViewModel;
@property (nonatomic) BOOL simpleSendMode;

+ (id)defaultPickModel;
+ (long long)indexOfIdentifier:(id)a0 inAssets:(id)a1;

- (BOOL)shouldSendAsLivePhotoIdentifier:(id)a0;
- (BOOL)containerAssetIdentifier:(id)a0;
- (id)phAssetForIdentify:(id)a0;
- (unsigned long long)indexOfAssetIdentifier:(id)a0;
- (void)removeLivePhotoAssetIdentifier:(id)a0;
- (void)removeAssetIdentifier:(id)a0;
- (void)addLivePhotoAssetIdentifierWithoutPostNoti:(id)a0;
- (void)addLivePhotoAssetIdentifier:(id)a0;
- (void)removeAssetIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAsset:(id)a0;
- (BOOL)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;

@end
