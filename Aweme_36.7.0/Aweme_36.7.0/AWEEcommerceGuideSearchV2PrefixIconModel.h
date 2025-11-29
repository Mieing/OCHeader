@class NSArray, NSString;

@interface AWEEcommerceGuideSearchV2PrefixIconModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *urlList;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
