@class AWELiteRedPacketStickerInfo;

@interface AWELiteRedPacketStickerApiModel : AWELiteRedPacketBaseApiModel

@property (retain, nonatomic) AWELiteRedPacketStickerInfo *sticker;

+ (id)redPacketJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
