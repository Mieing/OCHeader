@class IESLLLiveShelfElementTextModel, IESLLLiveShelfElementMediaModel, NSString, NSNumber;

@interface IESLLLiveShelfCardElementGroupModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasGroup;
@property (copy, nonatomic) NSNumber *groupOrder;
@property (copy, nonatomic) NSNumber *groupCount;
@property (copy, nonatomic) NSNumber *expGroupOrder;
@property (copy, nonatomic) NSNumber *expGroupCount;
@property (nonatomic) long long brandType;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *brandIcon;
@property (copy, nonatomic) NSString *brandIconTopMargin;
@property (copy, nonatomic) NSString *brandIconBorderColor;
@property (retain, nonatomic) IESLLLiveShelfElementTextModel *brandName;
@property (retain, nonatomic) IESLLLiveShelfElementTextModel *brandSubname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
