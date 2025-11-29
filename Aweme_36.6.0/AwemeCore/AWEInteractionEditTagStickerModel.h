@class NSString, AWEInteractionEditTagStickerInfoModel;

@interface AWEInteractionEditTagStickerModel : AWEInteractionStickerModel

@property (copy, nonatomic) NSString *actualSize;
@property (retain, nonatomic) AWEInteractionEditTagStickerInfoModel *editTagInfo;

+ (id)editTagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)nativeSticker;
- (void).cxx_destruct;

@end
