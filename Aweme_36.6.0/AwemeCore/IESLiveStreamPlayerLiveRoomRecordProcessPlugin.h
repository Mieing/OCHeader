@class NSString;

@interface IESLiveStreamPlayerLiveRoomRecordProcessPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerLiveRoomRecordProcessPluginProtocol>

@property (nonatomic) BOOL didRecordProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

@end
