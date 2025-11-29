@class EditFinderImageAttr, WCLocationInfo, NSString, NSArray, UIImage, NSMutableDictionary, CALayer, EditVideoBGMSelectedMusicInfo, NSMutableArray, EditStoryImageAttr, NSURL;

@interface EditImageAttr : MMObject <NSCoding>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIImage *editedImage;
@property (retain, nonatomic) NSString *editedImageAssetId;
@property (retain, nonatomic) NSArray *editedWidgetStateList;
@property (retain, nonatomic) NSMutableArray *editedImages;
@property (retain, nonatomic) NSMutableArray *selectGifDatas;
@property (retain, nonatomic) UIImage *unCropImage;
@property (retain, nonatomic) NSMutableDictionary *editImageAttrDic;
@property (retain, nonatomic) NSMutableArray *drawViewArray;
@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) CALayer *overlayLayer;
@property (retain, nonatomic) WCLocationInfo *locationInfo;
@property (retain, nonatomic) NSString *poiReportStr4Commit;
@property (nonatomic) unsigned long long startEditTimeInMs;
@property (retain, nonatomic) EditStoryImageAttr *storyAttr;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo;
@property (retain, nonatomic) NSURL *patMusicURL;
@property (retain, nonatomic) EditFinderImageAttr *finderAttr;
@property (copy, nonatomic) NSString *imageEditId;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) double snsCoverOffset;
@property (nonatomic) unsigned long long editorSessionId;
@property (retain, nonatomic) NSString *yuanbaoTemplateId;
@property (retain, nonatomic) NSString *yuanbaoPhotoPath;
@property (retain, nonatomic) NSString *yuanbaoVideoPath;

+ (id)generateWidgetViewListFromWidgetStateList:(id)a0 forCanvasSize:(struct CGSize { double x0; double x1; })a1;
+ (id)generateWidgetCanvasViewFromWidgetViewList:(id)a0 forCanvasSize:(struct CGSize { double x0; double x1; })a1;
+ (id)generateWidgetCanvasViewThumbFromView:(id)a0 atTimeOffsetSec:(double)a1 forSize:(struct CGSize { double x0; double x1; })a2;
+ (id)generateWidgetCanvasAnimateLayerFromView:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
+ (id)generateMergedImageFromImageList:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;

- (id)getByPassInfoObjectForKey:(id)a0;
- (void)setImagePickerByPassInfo:(id)a0;
- (id)getImagePickerByPassInfo;
- (id)initWithAssetUrl:(id)a0 withImage:(id)a1 withDrawLayer:(id)a2 withEdited:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getTexts:(id)a0 andEmotionMd5s:(id)a1;
- (id)generateWidgetViewListForCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateWidgetCanvasViewForSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateWidgetCanvasAnimateLayerForSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
