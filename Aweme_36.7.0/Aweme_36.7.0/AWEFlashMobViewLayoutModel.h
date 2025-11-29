@class AWEFlashMobFlashAvatarsConfig, NSString, AWEFlashMobFlashJoinBtnConfig, AWEFlashMobFlashTitleConfig, AWEFlashMobFlashMobStickerConfig;

@interface AWEFlashMobViewLayoutModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFlashMobFlashAvatarsConfig *flashAvatarsConfig;
@property (retain, nonatomic) AWEFlashMobFlashJoinBtnConfig *flashJoinBtnConfig;
@property (retain, nonatomic) AWEFlashMobFlashTitleConfig *flashTitleConfig;
@property (retain, nonatomic) AWEFlashMobFlashMobStickerConfig *flashMobStickerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flashAvatarsConfigJSONTransformer;
+ (id)flashJoinBtnConfigJSONTransformer;
+ (id)flashTitleConfigJSONTransformer;
+ (id)flashMobStickerConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
