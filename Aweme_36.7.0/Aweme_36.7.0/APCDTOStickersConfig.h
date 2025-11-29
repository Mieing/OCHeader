@class NSArray, NSString;

@interface APCDTOStickersConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *infoSticker;
@property (copy, nonatomic) NSArray *textSticker;
@property (copy, nonatomic) NSArray *hashtagSticker;
@property (copy, nonatomic) NSArray *mentionSticker;
@property (copy, nonatomic) NSArray *customSticker;
@property (copy, nonatomic) NSArray *poiSticker;
@property (copy, nonatomic) NSArray *lyricSticker;
@property (copy, nonatomic) NSArray *quickFlashSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickFlashStickerJSONTransformer;
+ (id)infoStickerJSONTransformer;
+ (id)textStickerJSONTransformer;
+ (id)hashtagStickerJSONTransformer;
+ (id)mentionStickerJSONTransformer;
+ (id)customStickerJSONTransformer;
+ (id)poiStickerJSONTransformer;
+ (id)lyricStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
