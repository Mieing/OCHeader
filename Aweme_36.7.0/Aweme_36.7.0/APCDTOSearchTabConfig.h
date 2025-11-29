@class NSString, NSArray;

@interface APCDTOSearchTabConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSArray *recommendKeyWords;
@property (copy, nonatomic) NSString *recommendTitle;
@property (nonatomic) long long recommendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
