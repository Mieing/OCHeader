@class NSString, NSDate;
@protocol IESIMThirdPartyMessageProtocol;

@interface IESIMThirdPartyBizConversation : NSObject <IESIMThirdPartyConversationProtocol>

@property int type;
@property (copy) NSString *identifier;
@property int countStatus;
@property int badgeCount;
@property int readBadgeCount;
@property int importantBadgeCount;
@property int readImportantBadgeCount;
@property (nonatomic) int hintReadBadgeCount;
@property (nonatomic) int hintReadImportantBadgeCount;
@property (retain) id<IESIMThirdPartyMessageProtocol> lastMessage;
@property long long shortID;
@property int inbox;
@property int bizId;
@property int status;
@property int unreadCount;
@property int importantUnreadCount;
@property (nonatomic) int hintUnreadCount;
@property (nonatomic) int hintImportantUnreadCount;
@property long long minIndex;
@property (retain) NSDate *updatedAt;
@property long long sortOrder;
@property (copy) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizId:(int)a0 inbox:(int)a1 metaInfo:(id)a2;
- (void).cxx_destruct;

@end
