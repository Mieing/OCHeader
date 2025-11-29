@class NSArray, NSString;

@interface AWEPOIOrderCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *spuList;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *expireTimeText;
@property (copy, nonatomic) NSString *orderURLString;
@property (nonatomic) long long bizLineType;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL isLifeOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
