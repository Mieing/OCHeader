@class NSString;

@interface IESECShopSearchSuggestHighlightPosition : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
