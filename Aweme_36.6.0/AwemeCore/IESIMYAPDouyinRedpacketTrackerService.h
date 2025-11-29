@class NSString;

@interface IESIMYAPDouyinRedpacketTrackerService : HTSService <IESIMYAPDouyinRedpacketTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackRedPacketNoticeMessageEvent:(id)a0 message:(id)a1 param:(id)a2;

@end
