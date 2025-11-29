@class NSString, AWEQuickFlashStickerModel;

@interface APCDTOQuickFlashStickerConfigExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEQuickFlashStickerModel *flashStickerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
