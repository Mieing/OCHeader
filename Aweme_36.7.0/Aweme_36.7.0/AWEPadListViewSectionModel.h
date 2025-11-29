@class NSString, NSArray, AWEPadListViewHeaderModel, NSDictionary, AWEPLVSectionGridConfigModel, AWEPadPolymericChannelCardSizeFormulaModel;

@interface AWEPadListViewSectionModel : MTLModel <MTLJSONSerializing, AWEPLVSectionModelProtocol>

@property (nonatomic) long long sectionType;
@property (nonatomic) long long sectionInteractType;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEPadPolymericChannelCardSizeFormulaModel *cardSizeFormula;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) AWEPadListViewHeaderModel *sectionHeader;
@property (retain, nonatomic) NSDictionary *sectionConfigRawData;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVSectionGridConfigModel *sectionGridConfig;
@property (retain, nonatomic) NSDictionary *cardConfig;
@property (nonatomic) BOOL enableLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)sectionHeaderJSONTransformer;
+ (id)sectionGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
