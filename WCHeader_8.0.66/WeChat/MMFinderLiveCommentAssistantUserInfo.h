@class NSString, FinderLiveContact;

@interface MMFinderLiveCommentAssistantUserInfo : NSObject

@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL fromWechatContact;
@property (retain, nonatomic) FinderLiveContact *contact;

+ (id)fromFinderLiveRoomManager:(id)a0;

- (id)toFinderLiveRoomManager;
- (void).cxx_destruct;

@end
