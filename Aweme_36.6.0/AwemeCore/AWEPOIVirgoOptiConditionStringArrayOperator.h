@class NSString;

@interface AWEPOIVirgoOptiConditionStringArrayOperator : NSObject <AWEPOIVirgoOptiConditionOperator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeConditionValue:(id)a0 withLocalValue:(id)a1 op:(id)a2;
- (BOOL)isLocalValue:(id)a0 belongTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 notBelongTo:(id)a1;
- (BOOL)isLocalValue:(id)a0 contains:(id)a1;
- (BOOL)isLocalValue:(id)a0 notContains:(id)a1;
- (BOOL)isLocalValue:(id)a0 intersection:(id)a1;
- (BOOL)isArray:(id)a0 aSubsetOfArray:(id)a1;
- (BOOL)checkIsNSStringArray:(id)a0;

@end
