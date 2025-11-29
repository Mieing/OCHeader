@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData, NSNumber;

@interface IESLiveShareVideoSEIParserResult : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveSEIParserResult>

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *status;
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

+ (id)itemIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
