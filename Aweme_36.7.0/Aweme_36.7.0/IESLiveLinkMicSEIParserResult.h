@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveLinkMicSEIParserResult : MTLModel <IESLiveSEIParserResult, MTLJSONSerializing>

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

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldFilterChannelID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
