@class NSArray, NSDictionary, NSString;

@interface IESECEntranceInfoCheckerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *checkKeys;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *forceRule;
@property (copy, nonatomic) NSArray *passFiltered;
@property (copy, nonatomic) NSDictionary *ruleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
