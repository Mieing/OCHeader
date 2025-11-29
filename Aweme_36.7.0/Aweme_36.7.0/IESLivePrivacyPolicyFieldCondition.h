@class NSString;

@interface IESLivePrivacyPolicyFieldCondition : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *field;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned long long op;

- (id)initWithField:(id)a0 value:(id)a1 op:(unsigned long long)a2;
- (BOOL)_evaluateEqualWithContextValue:(id)a0;
- (BOOL)_evaluateInWithContextValue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateWithContext:(id)a0;
- (id)initWithField:(id)a0 value:(id)a1;

@end
