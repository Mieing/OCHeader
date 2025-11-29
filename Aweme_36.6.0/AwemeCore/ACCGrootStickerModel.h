@class NSString, NSArray, NSDictionary, NSNumber, ACCGrootDetailsStickerModel;

@interface ACCGrootStickerModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *effectIdentifier;
@property (copy, nonatomic) NSNumber *hasGroot;
@property (copy, nonatomic) ACCGrootDetailsStickerModel *selectedGrootStickerModel;
@property (copy, nonatomic) NSArray *grootDetailStickerModels;
@property (nonatomic) BOOL allowGrootResearch;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *effectExtraInfo;
@property (copy, nonatomic) NSDictionary *userGrootInfo;
@property (nonatomic) BOOL fromRecord;
@property (copy, nonatomic) NSString *tabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)grootDetailStickerModelsJSONTransformer;
+ (id)selectedGrootStickerModelJSONTransformer;
+ (id)grootModelResultFilterWithString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithEffectIdentifier:(id)a0;
- (void)recoverDataFromDraftJsonString:(id)a0;
- (id)draftDataJsonString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
