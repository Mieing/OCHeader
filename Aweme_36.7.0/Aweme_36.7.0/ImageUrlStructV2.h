@class ImagePreviewV2, NSString, VideoStructV2, ImageExtraStructV2, NSMutableArray, CompressedUrlListV2;

@interface ImageUrlStructV2 : GPBMessage

@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (retain, nonatomic) NSMutableArray *downloadURLListArray;
@property (readonly, nonatomic) unsigned long long downloadURLListArray_Count;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (retain, nonatomic) NSMutableArray *maskURLListArray;
@property (readonly, nonatomic) unsigned long long maskURLListArray_Count;
@property (retain, nonatomic) VideoStructV2 *video;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) int index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) int clipType;
@property (nonatomic) BOOL hasClipType;
@property (nonatomic) int imageType;
@property (nonatomic) BOOL hasImageType;
@property (retain, nonatomic) NSMutableArray *interactionStickersArray;
@property (readonly, nonatomic) unsigned long long interactionStickersArray_Count;
@property (retain, nonatomic) ImageExtraStructV2 *imageExtra;
@property (nonatomic) BOOL hasImageExtra;
@property (nonatomic) BOOL readText;
@property (nonatomic) BOOL hasReadText;
@property (copy, nonatomic) NSString *imageStickerId;
@property (nonatomic) BOOL hasImageStickerId;
@property (copy, nonatomic) NSString *imageTemplateId;
@property (nonatomic) BOOL hasImageTemplateId;
@property (nonatomic) int templateType;
@property (nonatomic) BOOL hasTemplateType;
@property (retain, nonatomic) CompressedUrlListV2 *compressedURLList;
@property (nonatomic) BOOL hasCompressedURLList;
@property (nonatomic) int livePhotoType;
@property (nonatomic) BOOL hasLivePhotoType;
@property (retain, nonatomic) ImagePreviewV2 *preview;
@property (nonatomic) BOOL hasPreview;
@property (nonatomic) int isNewTextMode;
@property (nonatomic) BOOL hasIsNewTextMode;
@property (retain, nonatomic) NSMutableArray *watermarkFreeDownloadURLListArray;
@property (readonly, nonatomic) unsigned long long watermarkFreeDownloadURLListArray_Count;

+ (id)descriptor;

- (int)templateType;
- (int)isNewTextMode;
- (int)width;
- (int)height;
- (id)downloadURLListArray;
- (id)URLListArray;
- (id)uri;

@end
