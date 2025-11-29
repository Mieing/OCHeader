@class NSString;

@interface LVFontEffectValidator : NSObject <LVEffectValidator, LVEffectValidateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verifyEffectModel:(id)a0;
- (id)validateEffect:(id)a0 filePath:(id)a1;

@end
