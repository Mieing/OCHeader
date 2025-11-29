@class NSArray, AWEIMStickerModel;

@interface AWENoticeContentResourceModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (retain, nonatomic) NSArray *imageList;

+ (id)imageListJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
