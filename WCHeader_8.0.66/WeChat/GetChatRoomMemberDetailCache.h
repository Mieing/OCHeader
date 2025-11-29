@class NSString;

@interface GetChatRoomMemberDetailCache : NSObject

@property (retain, nonatomic) NSString *m_nsUserName;
@property (nonatomic) unsigned int m_uiChatRoomClientVersion;
@property (nonatomic) unsigned int m_uiChatRoomServerVersion;
@property (nonatomic) unsigned int m_uiLastGetTime;

- (void).cxx_destruct;

@end
