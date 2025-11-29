@class NSString, NSArray, NSURL, AWECodeGenImagePreviewModel, AWEImageAlbumImageExtraModel, UIImage, AWECodeGenCompressedUrlListModel, AWEVideoModel;

@interface AWEImageAlbumImageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imgId;
@property (copy, nonatomic) NSArray *maskImageURL;
@property (nonatomic) BOOL hasPrefetched;
@property (nonatomic) BOOL hasSetBitrate;
@property (retain, nonatomic) NSString *imageAlbumSelecteGearName;
@property (readonly, nonatomic) BOOL isImageFormat;
@property (readonly, nonatomic) BOOL isVideoFormat;
@property (readonly, nonatomic) BOOL isVideoLikeContent;
@property (retain, nonatomic) NSURL *localCacheURL;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isFakeModel;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSArray *downloadURLList;
@property (copy, nonatomic) NSArray *watermarkFreeUrlList;
@property (copy, nonatomic) NSArray *interactionStickers;
@property (retain, nonatomic) AWEVideoModel *clipVideo;
@property (nonatomic) long long index;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasReadText;
@property (retain, nonatomic) AWECodeGenImagePreviewModel *preview;
@property (nonatomic) long long imageType;
@property (nonatomic) long long livePhotoType;
@property (copy, nonatomic) NSString *imageStickerId;
@property (readonly, copy, nonatomic) NSString *picTemplateId;
@property (readonly, nonatomic) long long picTemplateType;
@property (nonatomic) long long splashType;
@property (copy, nonatomic) NSArray *searchStickers;
@property (copy, nonatomic) NSArray *dict;
@property (retain, nonatomic) AWEImageAlbumImageExtraModel *imageExtraModel;
@property (copy, nonatomic) id /* block */ imageRefreshBlock;
@property (readonly, nonatomic) AWECodeGenCompressedUrlListModel *compressedUrlListModel;
@property (retain, nonatomic) UIImage *story25DraftImage;

+ (id)interactionStickersJSONTransformer;
+ (id)searchStickersJSONTransformer;
+ (id)clipVideoJSONTransformer;
+ (id)imageTypeJSONTransformer;
+ (id)imageExtraModelJSONTransformer;
+ (id)AFDNowMaskImage_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
