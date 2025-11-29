@class WCDataItem, WCMediaItem;

@interface WCImageViewModel : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (nonatomic) long long imageType;
@property (nonatomic) long long precedentImageType;
@property (nonatomic) int style;
@property (nonatomic) int photoType;
@property (nonatomic) BOOL canGridPreview;

+ (id)centerSmall:(id)a0;
+ (id)centerSmallAndGridPreview:(id)a0;
+ (id)centerSmall:(id)a0 parent:(id)a1;
+ (id)centerSmall:(id)a0 photoType:(int)a1;
+ (id)centerSmall:(id)a0 couldCacheBig:(BOOL)a1;
+ (id)adaptiveSmall:(id)a0;
+ (id)adaptiveSmallAndGridPreview:(id)a0;
+ (id)adaptiveSmall:(id)a0 imageType:(long long)a1;
+ (id)adaptiveSmall:(id)a0 couldCacheBig:(BOOL)a1;

- (id)initWithParent:(id)a0 mediaItem:(id)a1;
- (BOOL)isNormalGridPreview;
- (id)getDisplayName:(id)a0;
- (void)startDownloadImage;
- (BOOL)isValidDownloadType:(long long)a0;
- (id)defaultImage;
- (double)imgAspectRatio;
- (id)getDetailCommentPlaceHolderImage;
- (id)getMsgListCommentPlaceHolderImage;
- (id)getPreviewImgFICEntity;
- (id)mediaID;
- (id)getImgWithPreviewImgFICEntity:(id)a0;
- (void)asyncCacheImageToFIC:(id)a0 image:(id)a1;
- (id)getImageFromCache;
- (id)getPrecedentImageFromCache;
- (id)getBigImageFromCache;
- (BOOL)canShowThumb;
- (BOOL)shouldUpdateBlur;
- (id)thumImageDownloadDebugInfo;
- (BOOL)needReportEcsData;
- (void).cxx_destruct;

@end
