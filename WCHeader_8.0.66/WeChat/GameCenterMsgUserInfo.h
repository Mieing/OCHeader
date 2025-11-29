@class NSString, GameJumpInfo;

@interface GameCenterMsgUserInfo : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *badgeIconUrl;
@property (retain, nonatomic) NSString *profileUrl;
@property (retain, nonatomic) GameJumpInfo *userJumpInfo;

- (id)getXmlSectionString;
- (id)getProfileUrl;
- (void).cxx_destruct;

@end
