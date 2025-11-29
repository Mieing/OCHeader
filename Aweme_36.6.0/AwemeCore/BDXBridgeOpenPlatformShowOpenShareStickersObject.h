@class NSDictionary, NSArray;

@interface BDXBridgeOpenPlatformShowOpenShareStickersObject : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *poiSticker;
@property (copy, nonatomic) NSDictionary *quickFlashSticker;
@property (retain, nonatomic) NSArray *hashtagStickers;
@property (retain, nonatomic) NSArray *mentionStickers;
@property (retain, nonatomic) NSArray *customStickers;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
