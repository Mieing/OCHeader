@class NSDictionary, NSString;

@interface SECRulerExprEnv : NSObject <BDREExprEnv>

@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) double cost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
