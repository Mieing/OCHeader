@class NSString;

@interface IESECShopISVComponentVersion : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *indexURL;
@property (copy, nonatomic) NSString *settingURL;
@property (copy, nonatomic) NSString *lynxIndexURL;
@property (nonatomic) long long frameworkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
