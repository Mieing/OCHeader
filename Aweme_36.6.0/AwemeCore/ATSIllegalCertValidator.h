@class NSString;

@interface ATSIllegalCertValidator : NSObject <BDAbnormalCertStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)strategyToHandleAbnormalCert:(id)a0 inEntryContext:(id)a1;
- (BOOL)canHandleCert:(id)a0 inEntryContext:(id)a1;

@end
