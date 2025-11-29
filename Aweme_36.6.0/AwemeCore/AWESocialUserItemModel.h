@class NSString, NSArray;

@interface AWESocialUserItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
