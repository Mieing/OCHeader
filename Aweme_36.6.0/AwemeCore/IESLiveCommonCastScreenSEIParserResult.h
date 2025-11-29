@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveCommonCastScreenSEIParserResult : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveSEIParserResult>

@property (nonatomic) BOOL isCastScreening;
@property (nonatomic) BOOL isApplet;
@property (copy, nonatomic) NSString *castScene;
@property (copy, nonatomic) NSString *castBizValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
