@class NSString, NSArray;

@interface IESECShopAfterLiveGuideCardProduct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) long long price;
@property (nonatomic) long long marketPrice;
@property (copy, nonatomic) NSString *recommendText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
