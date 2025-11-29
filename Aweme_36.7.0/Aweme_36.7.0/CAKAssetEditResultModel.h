@class NSString, UIImage, NSHashTable;

@interface CAKAssetEditResultModel : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) id /* block */ livePhotoBuilder;
@property (readonly, nonatomic) BOOL isEdited;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, nonatomic) UIImage *thumbImage;

- (void)requestLivePhoto:(id /* block */)a0;
- (void)resetWithImagePath:(id)a0 thumbImage:(id)a1 videoPath:(id)a2 livePhotoBuilder:(id /* block */)a3;
- (void)p_callback;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
