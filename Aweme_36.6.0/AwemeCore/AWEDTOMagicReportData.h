@class NSString;

@interface AWEDTOMagicReportData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *magicCompid;
@property (copy, nonatomic) NSString *magicSource;
@property (copy, nonatomic) NSString *magicActivityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
