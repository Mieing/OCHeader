@class NSString;
@protocol IESLiveAnchorRecordPreferenceService;

@interface IESECLiveAnchorRecordPreferenceServiceIESECBridger : NSObject <IESECLiveAnchorRecordPreferenceService>

@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void).cxx_destruct;
- (BOOL)playbackAllowed;

@end
