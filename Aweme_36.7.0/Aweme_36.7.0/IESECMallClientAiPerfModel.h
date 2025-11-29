@class NSString;

@interface IESECMallClientAiPerfModel : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double tAppLaunchTime;
@property (nonatomic) double tRegisterPitayaReady;
@property (nonatomic) double tPitayaReadyCompletion;
@property (nonatomic) double tPitayaMessageCompletion;
@property (nonatomic) double tPitayaOrderHomepageMessageCompletion;

- (id)toParamsDictionary;
- (void).cxx_destruct;

@end
