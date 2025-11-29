@class BDATMRulesResponseData, NSString;

@interface BDATMRulesResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) BDATMRulesResponseData *data;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
