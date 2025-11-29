@class NSString, IESEffectModel, IESThirdPartyStickerModel;

@interface ACCVideoEditStickerCacheModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isThirdPartySticker;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) IESThirdPartyStickerModel *thirdPartyStickerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithEffectModel:(id)a0 thirdPartyStickerModel:(id)a1;
- (void).cxx_destruct;

@end
