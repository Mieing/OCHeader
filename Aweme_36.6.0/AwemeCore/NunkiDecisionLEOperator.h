@class NSString;

@interface NunkiDecisionLEOperator : NSObject <NunkiDecisionOperator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)operateWithCurrentFactorValue:(id)a0 aimFactorValue:(id)a1;
- (BOOL)operateWithCurrentFactorString:(id)a0 aimFactorString:(id)a1;
- (id)type;

@end
