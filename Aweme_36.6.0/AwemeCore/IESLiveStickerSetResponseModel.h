@class NSDictionary, NSString;

@interface IESLiveStickerSetResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL contentIsEqual;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
