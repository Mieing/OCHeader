@class NSString;

@interface AWEPOIVirgoOptiConditionBooleanOperator : NSObject <AWEPOIVirgoOptiConditionOperator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLocalValue:(id)a0 equalTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 notEqualTo:(id)a1;
- (BOOL)executeConditionValue:(id)a0 withLocalValue:(id)a1 op:(id)a2;

@end
