@class NSString;

@interface BDREExprEnv : NSObject <BDREExprEnv>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetCost;
- (id)envValueOfKey:(id)a0;
- (double)cost;

@end
