@interface RTVVoipTrackContext : NSObject

@property (nonatomic) BOOL needMonitorFirstFrame;
@property (nonatomic) BOOL needMonitorJoinRoom;
@property (nonatomic) BOOL hadSwitchNarrowState;
@property (nonatomic) BOOL hadInvitedOthers;

@end
