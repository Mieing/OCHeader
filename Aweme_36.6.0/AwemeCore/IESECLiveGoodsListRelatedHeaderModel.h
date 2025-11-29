@class NSString, NSArray;

@interface IESECLiveGoodsListRelatedHeaderModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSArray *leftContent;
@property (retain, nonatomic) NSArray *rightContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftContentJSONTransformer;
+ (id)rightContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
