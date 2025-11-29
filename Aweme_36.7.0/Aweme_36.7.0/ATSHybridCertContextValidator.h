@class NSString;

@interface ATSHybridCertContextValidator : NSObject <BDHybridCertContextValidator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldContextValidationEnabledFor:(id)a0;

@end
