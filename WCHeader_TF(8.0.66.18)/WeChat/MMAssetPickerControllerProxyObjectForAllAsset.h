@class MMAlbum, NSMutableArray, NSString;
@protocol MMImagePickerControlCenter;

@interface MMAssetPickerControllerProxyObjectForAllAsset : NSObject <MMImagePreviewBrowserControllerDataSource>

@property (retain, nonatomic) MMAlbum *m_album;
@property (retain, nonatomic) NSMutableArray *selectedInfos;
@property (nonatomic) BOOL bPickerStyleForFile;
@property (retain, nonatomic) NSMutableArray *m_assetArray;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (retain, nonatomic) NSMutableArray *otherAlbumSelectedInfos;
@property (nonatomic) BOOL justPreviewSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPreviewSelectedOnly;
- (BOOL)isPreviewStyleForFile;
- (id)selectedAssetInfosForPreview;
- (long long)previewIndexForAssetInfo:(id)a0;
- (id)previewAssetInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)previewAssetTotal;
- (unsigned long long)getSelectedAssetTotalSize;
- (void).cxx_destruct;

@end
