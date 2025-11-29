@class NSString;

@interface IESLLPOIReportInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long userTypeCode;
@property (copy, nonatomic) NSString *reportSchema;
@property (copy, nonatomic) NSString *reportText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)userType;

@end
