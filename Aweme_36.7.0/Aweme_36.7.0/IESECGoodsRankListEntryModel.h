@class NSString, IESECURLModel, NSNumber;

@interface IESECGoodsRankListEntryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *brandIcon;
@property (copy, nonatomic) NSString *rankName;
@property (retain, nonatomic) IESECURLModel *rankingIcon;
@property (copy, nonatomic) NSString *rankSchema;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) unsigned long long rankListStyle;
@property (retain, nonatomic) IESECURLModel *bgIcon;
@property (copy, nonatomic) NSString *rankID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
