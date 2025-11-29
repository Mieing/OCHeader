@class AWECommentLivePhotoModel, AWEURLModel;

@interface AWECommentImageModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *originUrl;
@property (retain, nonatomic) AWEURLModel *cropUrl;
@property (retain, nonatomic) AWEURLModel *mediumUrl;
@property (retain, nonatomic) AWEURLModel *thumbUrl;
@property (retain, nonatomic) AWEURLModel *downloadUrl;
@property (retain, nonatomic) AWECommentLivePhotoModel *livePhotoModel;

+ (id)livePhotoModelJSONTransformer;
+ (id)originUrlJSONTransformer;
+ (id)cropUrlJSONTransformer;
+ (id)mediumUrlJSONTransformer;
+ (id)thumbUrlJSONTransformer;
+ (id)downloadUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
