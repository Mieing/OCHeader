@class NSString, AWENearbySavedAmountExpression;

@interface AWENearbyPriceDiffExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbySavedAmountExpression *savedAmountExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
