@class NSString, ACCImageAlbumItemModel;

@interface ACCImageAlbumEditorExportInputData : NSObject

@property (readonly, nonatomic) unsigned long long exportTypes;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) ACCImageAlbumItemModel *imageItem;
@property (copy, nonatomic) NSString *savePath;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL usingOriginalImage;
@property (nonatomic) BOOL needTrackInfo;
@property (nonatomic) BOOL usingUniqueImageExportFile;

- (id)initWithImageItem:(id)a0 index:(long long)a1 exportTypes:(unsigned long long)a2;
- (void).cxx_destruct;

@end
