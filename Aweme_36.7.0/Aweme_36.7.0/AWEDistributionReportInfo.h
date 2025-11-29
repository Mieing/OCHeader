@class NSString;

@interface AWEDistributionReportInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long bizType;
@property (nonatomic) unsigned long long funcType;
@property (retain, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
