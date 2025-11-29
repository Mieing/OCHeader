@class NSString, NSArray, APCDTOEffectExtension;

@interface APCDTOEffect : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEffectExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) BOOL uiVisible;
@property (nonatomic) BOOL autoApply;
@property (copy, nonatomic) NSString *backgroundImage;
@property (nonatomic) BOOL filterBusiness;
@property (copy, nonatomic) NSString *hintToast;
@property (nonatomic) BOOL showStickerPanel;
@property (copy, nonatomic) NSString *propReqId;
@property (copy, nonatomic) NSString *propSelectFrom;
@property (copy, nonatomic) NSArray *insertPropIds;
@property (nonatomic) BOOL alwaysShowPanel;
@property (copy, nonatomic) NSString *effectSocialData;
@property (copy, nonatomic) NSString *followMaterialInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
