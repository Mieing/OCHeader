@class NSString, NSArray;

@interface AWEECCpsTrackerReportParamsConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *paramKey;
@property (copy, nonatomic) NSString *urlMapName;
@property (retain, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *checkTypeOp;
@property (nonatomic) BOOL optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
