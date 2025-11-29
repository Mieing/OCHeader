@class AWEPadPolymericChannelSectionHeaderModel, NSString, NSArray, NSDictionary, AWEPLVSectionGridConfigModel, AWEPadPolymericChannelCardSizeFormulaModel;

@interface AWEPadPolymericChannelSectionModel : MTLModel <MTLJSONSerializing, AWEPLVSectionModelProtocol>

@property (nonatomic) long long sectionType;
@property (nonatomic) long long sectionInteractType;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEPadPolymericChannelCardSizeFormulaModel *cardSizeFormula;
@property (retain, nonatomic) AWEPadPolymericChannelSectionHeaderModel *sectionHeader;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) NSDictionary *sectionConfigRawData;
@property (retain, nonatomic) AWEPLVSectionGridConfigModel *sectionGridConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)sectionHeaderJSONTransformer;
+ (id)cardSizeFormulaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
