@class NSDictionary, NSString;

@interface AWEWebInspectorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long webReportType;
@property (copy, nonatomic) NSDictionary *labelThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
