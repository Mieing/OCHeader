@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData, IESLiveInteractHamletAvatarChestPosition;

@interface IESLiveInteractHamletAvatarSEIParserResult : IESLiveDynamicMTLModel <IESLiveSEIParserResult, MTLJSONSerializing>

@property (retain, nonatomic) IESLiveInteractHamletAvatarChestPosition *chestPosition;
@property (copy, nonatomic) NSString *avatars;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)chestPositionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
