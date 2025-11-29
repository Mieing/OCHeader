@class NSString, AWENearbyMarketingToolInfo;

@interface AWENearbyMarketingExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyMarketingToolInfo *marketingToolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
