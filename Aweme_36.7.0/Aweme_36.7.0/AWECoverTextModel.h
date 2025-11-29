@class NSArray, NSString, AWEInteractionStickerLocationModel, AWEStoryTextImageModel;

@interface AWECoverTextModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isStoryText;
@property (nonatomic) BOOL isNone;
@property (copy, nonatomic) NSArray *texts;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;
@property (copy, nonatomic) NSString *textEffectId;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *location;
@property (nonatomic) unsigned long long cursorLoc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationJSONTransformer;
+ (id)textModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDTOCoverText:(id)a0;
- (id)dtoCoverText;
- (void).cxx_destruct;

@end
