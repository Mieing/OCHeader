@class NSArray, NSString, NSDictionary;

@interface AWEMissionShoppingCartAnchorExtraInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *schemaInfos;
@property (nonatomic) long long allianceAccountStatus;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL isOverused;
@property (retain, nonatomic) NSArray *bindedPIDInfos;
@property (retain, nonatomic) NSString *bindedTaoBaoPID;
@property (retain, nonatomic) NSString *bindedYangMaTouPID;
@property (nonatomic) BOOL isAllianceAccountActivated;
@property (retain, nonatomic) NSDictionary *schemas;

+ (id)bindedPIDInfosJSONTransformer;
+ (id)schemaInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
