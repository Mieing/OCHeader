@class NSString;

@interface AWEMRLocVerifyOthersHomepageHandler : NSObject <AWEMRPopViewLocVerifyHandler>

@property (class, readonly, copy, nonatomic) NSString *locIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)locVerify:(id)a0;


@end
