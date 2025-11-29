@class NSArray, CAKAlbumListCustomCellConfig;

@interface CAKAlbumListTabConfig : NSObject

@property (nonatomic) BOOL enableTab;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) BOOL enablePreview;
@property (nonatomic) BOOL enableGIFMarkShow;
@property (nonatomic) BOOL enableLivePhoto;
@property (nonatomic) BOOL enableShowPreviewCheckMarkButton;
@property (retain, nonatomic) CAKAlbumListCustomCellConfig *customCellConfig;
@property (retain, nonatomic) NSArray *customCellConfigList;

- (void).cxx_destruct;
- (id)init;

@end
