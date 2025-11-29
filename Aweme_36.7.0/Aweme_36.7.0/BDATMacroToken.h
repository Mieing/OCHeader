@class NSString;

@interface BDATMacroToken : NSObject <BDATMacroToken>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)macroTokens:(id)a0 builder:(id)a1;
+ (id)processMacro:(id)a0 macros:(id)a1 error:(id *)a2;
+ (void)checkMacro:(id)a0 macros:(id)a1 adId:(id)a2 label:(id)a3;
+ (id)urlMacroToken:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
