@class NSString, MiniComposerFinishResultItemExtraImpl, NSError;
@protocol AWEStudioComposerFinishResultItemExtra;

@interface MiniComposerFinishResultItem : NSObject <AWEStudioComposerFinishResultItem>

@property (readonly, nonatomic) id<AWEStudioComposerFinishResultItemExtra> extra;
@property (readonly, nonatomic) MiniComposerFinishResultItemExtraImpl *itemExtraImpl;
@property (readonly, nonatomic) id rawInput;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *imagePath;
@property (readonly, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) struct CGSize { double width; double height; } itemSize;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) double livePhotoDuration;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *itemPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)thumbImage;
- (void)requestLivePhotoFiles:(id /* block */)a0;
- (void)requestLivePhoto:(id /* block */)a0;
- (id)initWithAssetExportResult:(id)a0;
- (id)initLivePhotoWithMergedImage:(id)a0 mergedVideo:(id)a1;
- (id)initWithMergedVideo:(id)a0;
- (id)initWithMergedImage:(id)a0;
- (void)changeToLivePhotoIfNeeded;
- (id)p_coverPathWithCoverImage:(id)a0 type:(id)a1;
- (id)p_coverImageWithVideoPath:(id)a0;
- (void)p_resetWithAssetEditedModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)duration;
- (id)initWithRawImage:(id)a0;
- (id)itemTypeString;

@end
