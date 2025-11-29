@class AWEInteractionStickerSocialHashtagModel, AWEInteractionStickerSocialMentionModel, NSString, AWEInteractionStickerSocialHotSpotModel;

@interface AWEInteractionStickerAssociatedSocialModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEInteractionStickerSocialHashtagModel *hashtagModel;
@property (retain, nonatomic) AWEInteractionStickerSocialMentionModel *mentionModel;
@property (retain, nonatomic) AWEInteractionStickerSocialHotSpotModel *hotSpotModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hotSpotModelJSONTransformer;
+ (id)mentionModelJSONTransformer;
+ (id)hashtagModelJSONTransformer;
+ (id)modelWithMention:(id)a0;
+ (id)modelWithHashTag:(id)a0;
+ (id)modelWithHotspot:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
