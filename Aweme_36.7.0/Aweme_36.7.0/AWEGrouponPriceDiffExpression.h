@class NSString, AWEGrouponSavedAmountExpression;

@interface AWEGrouponPriceDiffExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponSavedAmountExpression *savedAmountExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
