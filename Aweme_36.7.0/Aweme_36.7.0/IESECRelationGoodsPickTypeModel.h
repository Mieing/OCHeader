@class NSString, IESECURLModel;

@interface IESECRelationGoodsPickTypeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long pickType;
@property (copy, nonatomic) NSString *pickName;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) IESECURLModel *normalIconURL;
@property (copy, nonatomic) IESECURLModel *selectedIconURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
