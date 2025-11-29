@class NSString;
@protocol IESLiveAnchorRecordPreferenceService;

@interface IESLiveAnchorRealTimePlayBackFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> recordPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)handleRealTimePlayMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
