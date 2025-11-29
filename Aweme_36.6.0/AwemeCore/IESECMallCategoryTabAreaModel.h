@class NSArray, NSString;

@interface IESECMallCategoryTabAreaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *defaultTab;
@property (copy, nonatomic) NSString *topTab;
@property (nonatomic) long long maxTitleLen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
