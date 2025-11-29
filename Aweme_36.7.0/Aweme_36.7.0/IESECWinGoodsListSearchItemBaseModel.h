@class NSString;

@interface IESECWinGoodsListSearchItemBaseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;


@end
