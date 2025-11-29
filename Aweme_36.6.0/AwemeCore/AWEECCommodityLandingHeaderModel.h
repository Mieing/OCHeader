@class NSString, NSArray, AWEURLModel;

@interface AWEECCommodityLandingHeaderModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (nonatomic) BOOL isOptAB;
@property (nonatomic) long long count;
@property (nonatomic) BOOL state;
@property (copy, nonatomic) NSString *collectTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
