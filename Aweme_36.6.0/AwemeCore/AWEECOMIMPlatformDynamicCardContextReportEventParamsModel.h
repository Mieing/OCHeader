@class NSDictionary, NSString;

@interface AWEECOMIMPlatformDynamicCardContextReportEventParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *pageReportParams;
@property (copy, nonatomic) NSDictionary *cardReportParams;
@property (copy, nonatomic) NSString *hierarchicalDimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
