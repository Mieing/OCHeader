@class NSString, NSDictionary, IESLivePaidStreamUIConfig, NSNumber;

@interface IESLivePaidStreamConfig : NSObject

@property (readonly, nonatomic) IESLivePaidStreamUIConfig *uiConfig;
@property (nonatomic) long long paidScene;
@property (nonatomic) long long paidChannel;
@property (nonatomic) unsigned long long paidLaunchSource;
@property (copy, nonatomic) NSNumber *authID;
@property (copy, nonatomic) NSDictionary *extraAuthParams;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSNumber *pingID;
@property (copy, nonatomic) NSString *customTrialPersistKey;
@property (copy, nonatomic) NSString *paidPanelURLString;
@property (copy, nonatomic) NSString *prepayCashierJumpURL;
@property (copy, nonatomic) id /* block */ paidPanelURLParamsHandler;
@property (nonatomic) double initialTrialTime;
@property (nonatomic) double maxTrialDuration;
@property (nonatomic, getter=isInitialPaid) BOOL initialPaid;
@property (nonatomic, getter=isInitialPromised) BOOL initialPromised;
@property (nonatomic, getter=isShouldManualPromise) BOOL shouldManualPromise;
@property (nonatomic) unsigned long long authSource;
@property (copy, nonatomic) id /* block */ grabFreeURLParamsHandler;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (copy, nonatomic) id /* block */ openPaidPanelHandler;

- (void).cxx_destruct;
- (id)init;

@end
