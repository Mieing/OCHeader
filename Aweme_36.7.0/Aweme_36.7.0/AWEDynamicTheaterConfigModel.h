@class NSArray, NSString, AWETheaterListDecorationModel;

@interface AWEDynamicTheaterConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWETheaterListDecorationModel *listDecoration;
@property (copy, nonatomic) NSArray *cardDescription;
@property (copy, nonatomic) NSArray *cardConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardConfigJSONTransformer;
+ (id)cardDescriptionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
