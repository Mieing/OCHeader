@class NSString, NSArray, NSDictionary, IESECListKitDemoCover, IESECListKitDemoPrice, IESECListKitProductReasonModel;

@interface IESECListKitDemoProduct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *promotionId;
@property (nonatomic) long long commodityType;
@property (nonatomic) long long salesNum;
@property (retain, nonatomic) IESECListKitDemoPrice *price;
@property (retain, nonatomic) IESECListKitDemoCover *cover;
@property (copy, nonatomic) NSString *recommendInfo;
@property (retain, nonatomic) IESECListKitProductReasonModel *recReason;
@property (retain, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) NSString *descriptionTagText;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)recReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
