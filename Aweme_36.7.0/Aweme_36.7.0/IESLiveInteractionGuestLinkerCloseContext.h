@class NSString;

@interface IESLiveInteractionGuestLinkerCloseContext : NSObject

@property (nonatomic) BOOL hasJoinedChannel;
@property (nonatomic) BOOL leaveLinkmicRoom;
@property (nonatomic) BOOL isFromLinkmicEnd;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end
