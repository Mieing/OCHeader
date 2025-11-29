@class NSArray, NSString;

@interface TMBPEAHybridContextValidator : NSObject <BDHybridCertContextValidator>

@property (copy, nonatomic) NSArray *shouldValidatePageTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldContextValidationEnabledFor:(id)a0;
- (id)defaultValidatePageTypes;
- (void).cxx_destruct;

@end
