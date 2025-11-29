@class NSArray, NSString;

@interface APCDTOGlobalStickersConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *quickFlashSticker;
@property (copy, nonatomic) NSArray *reserved_kw_newHashtagSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickFlashStickerJSONTransformer;
+ (id)reserved_kw_newHashtagStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
