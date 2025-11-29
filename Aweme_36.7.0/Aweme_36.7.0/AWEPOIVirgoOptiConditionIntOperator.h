@class NSString;

@interface AWEPOIVirgoOptiConditionIntOperator : NSObject <AWEPOIVirgoOptiConditionOperator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLocalValue:(id)a0 equalTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 notEqualTo:(id)a1;
- (BOOL)executeConditionValue:(id)a0 withLocalValue:(id)a1 op:(id)a2;
- (BOOL)isLocalValue:(id)a0 greaterThan:(id)a1;
- (BOOL)isLocalValue:(id)a0 lessThan:(id)a1;
- (BOOL)isLocalValue:(id)a0 greaterOrEqualTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 lesserOrEqualTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 belongTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 notBelongTo:(id)a1;
- (BOOL)checkIsNumberArray:(id)a0;

@end
