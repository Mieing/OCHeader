@class NSString, NSDictionary;

@interface AWEPOIPreviewPageLogModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)trackWithExtraParams:(id)a0;
- (void).cxx_destruct;

@end
