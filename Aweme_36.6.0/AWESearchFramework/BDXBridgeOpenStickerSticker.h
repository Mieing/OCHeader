@class NSNumber, NSDictionary;

@interface BDXBridgeOpenStickerSticker : BDXBridgeModel

@property (retain, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSDictionary *static_url;
@property (copy, nonatomic) NSDictionary *animate_url;
@property (retain, nonatomic) NSNumber *sticker_type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
