@class NSMutableArray;

@interface WCMomentsPickerActionRecorder : NSObject <NSCopying>

@property (nonatomic) long long videoProducerEnabler;
@property (retain, nonatomic) NSMutableArray *assetOperationList;
@property (retain, nonatomic) NSMutableArray *selectedAssetOperationList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pickerDidFinish;
- (void)pickerDidCancel;
- (void)pickerDidSelectAsset:(id)a0 from:(long long)a1;
- (void)pickerDidDeselectAsset:(id)a0;
- (void)pickerDidEnableVideoProducer:(long long)a0;
- (void)pickerDidDisableVideoProducer;
- (void)_recordAssetOperation:(id)a0;
- (void)_updateSelectedAssetSetWithAssetOperation:(id)a0;
- (void)_addSelectedAssetOperation:(id)a0;
- (void)_removeSelectedAssetOperation:(id)a0;
- (id)_ensureAssetOperationList;
- (id)_ensureSelectedAssetOperationList;
- (void)_sortSelectedAssetOperation:(id)a0;
- (void).cxx_destruct;

@end
