@class NSString;

@interface IESLLPOIDeliveryMenuBarUIModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *closeButtonUrl;
@property (copy, nonatomic) NSString *shareButtonUrl;
@property (copy, nonatomic) NSString *searchButtonUrl;
@property (copy, nonatomic) NSString *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
