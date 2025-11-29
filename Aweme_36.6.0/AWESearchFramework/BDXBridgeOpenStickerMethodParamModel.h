@class BDXBridgeOpenStickerSticker;

@interface BDXBridgeOpenStickerMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeOpenStickerSticker *sticker;

+ (id)requiredKeyPaths;
+ (id)stickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
