@class NSString;

@interface AWELiveStatusInfoABConfigImpl : NSObject <AWELiveStatusInfoABConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableIMShowLiveStatus;
+ (BOOL)enableIMLiveAvatorEnterLiveRoom;
+ (BOOL)imChatLiveStatusCycleFix;
+ (long long)imCheckLiveStatusSingDuration;
+ (long long)imCheckLiveStatusHeartbeatDuration;
+ (long long)imCheckLiveStatusSingleMaxNum;


@end
