@class NSString, AWEURLModel;

@interface AWEPOIHotWordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *prefixTag;
@property (copy, nonatomic) NSString *douDiscountID;
@property (copy, nonatomic) NSString *categoryType;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *discountValue;
@property (copy, nonatomic) NSString *collectedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
