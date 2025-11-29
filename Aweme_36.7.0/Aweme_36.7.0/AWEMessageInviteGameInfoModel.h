@class NSString, NSURL;

@interface AWEMessageInviteGameInfoModel : NSObject <AWEIMFriendsRoomGameInfoProtocol>

@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) long long inviteFrom;
@property (copy, nonatomic) NSURL *coverImageURL;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
