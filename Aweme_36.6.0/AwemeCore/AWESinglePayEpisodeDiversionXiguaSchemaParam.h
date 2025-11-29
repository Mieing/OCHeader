@class NSString, NSDictionary;

@interface AWESinglePayEpisodeDiversionXiguaSchemaParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *goodsId;
@property (copy, nonatomic) NSDictionary *logPb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
