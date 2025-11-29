@class NSString;

@interface MMFinderLiveRedPacketConfiguration : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) BOOL showsNewBadge;
@property (readonly, nonatomic) BOOL showsInRoomchatAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickNewBadge;

@end
