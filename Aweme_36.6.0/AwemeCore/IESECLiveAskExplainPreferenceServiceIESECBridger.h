@class NSString;
@protocol IESLiveAskExplainPreferenceService;

@interface IESECLiveAskExplainPreferenceServiceIESECBridger : NSObject <IESECLiveAskExplainPreferenceService>

@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)askExplainAllowed;
- (void).cxx_destruct;

@end
