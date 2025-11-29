@class NSMutableArray;

@interface IESLLPOIAlbumSelectedStatus : NSObject

@property (retain, nonatomic) NSMutableArray *selectedPhotos;
@property (nonatomic) BOOL isSelectedMode;
@property (nonatomic) BOOL isSelectedFull;
@property (nonatomic) BOOL hasSelected;

- (void)appendSelectedPhoto:(id)a0;
- (void)removeSelectedPhotos:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
