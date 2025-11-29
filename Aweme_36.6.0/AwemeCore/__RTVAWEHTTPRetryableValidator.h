@class NSString;

@interface __RTVAWEHTTPRetryableValidator : NSObject <RTVJetHTTPRetryableValidatorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateError:(id)a0 currentRetryTimes:(unsigned long long)a1 reason:(long long)a2;

@end
