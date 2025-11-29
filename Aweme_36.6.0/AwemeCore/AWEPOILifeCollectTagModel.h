@class NSString, NSArray;

@interface AWEPOILifeCollectTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *imgUrlLight;
@property (copy, nonatomic) NSString *imgUrlDark;
@property (copy, nonatomic) NSString *imgUrl;
@property (copy, nonatomic) NSArray *tagTextList;
@property (nonatomic) long long flashSaleTS;
@property (nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
