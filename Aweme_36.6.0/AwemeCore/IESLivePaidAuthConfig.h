@class NSNumber, NSDictionary;

@interface IESLivePaidAuthConfig : NSObject

@property (nonatomic) long long paidScene;
@property (nonatomic) unsigned long long paidLaunchSource;
@property (nonatomic, getter=isInitialPaid) BOOL initialPaid;
@property (nonatomic, getter=isInitialPromised) BOOL initialPromised;
@property (nonatomic, getter=isShouldManualPromise) BOOL shouldManualPromise;
@property (nonatomic) unsigned long long authSource;
@property (copy, nonatomic) NSNumber *authID;
@property (copy, nonatomic) NSDictionary *extraAuthParams;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSNumber *pingID;

- (void).cxx_destruct;

@end
