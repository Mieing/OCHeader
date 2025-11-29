@class NSDictionary;

@interface ACCFlashMobUpdateConfig : APCDTOQuickFlashStickerConfig

@property (nonatomic) unsigned long long renderStickerType;
@property (retain, nonatomic) NSDictionary *extraDic;

- (id)initWithQuickFlashModel:(id)a0;
- (void)setUpWithQuickFlashModel:(id)a0;
- (id)buildQuickFlashModelWithConfig;
- (void).cxx_destruct;

@end
