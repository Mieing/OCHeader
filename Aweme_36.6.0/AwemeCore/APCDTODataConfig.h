@class APCDTOAIGCConfig, APCDTONoteConfig, NSString, APCDTOMVDataConfig, APCDTOOneClickFilmConfig, APCDTOTextConfig;

@interface APCDTODataConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOMVDataConfig *mvData;
@property (retain, nonatomic) APCDTONoteConfig *noteConfig;
@property (retain, nonatomic) APCDTOOneClickFilmConfig *oneClickFilmConfig;
@property (retain, nonatomic) APCDTOTextConfig *textConfig;
@property (retain, nonatomic) APCDTOAIGCConfig *aigcConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textConfigJSONTransformer;
+ (id)mvDataJSONTransformer;
+ (id)noteConfigJSONTransformer;
+ (id)oneClickFilmConfigJSONTransformer;
+ (id)aigcConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
