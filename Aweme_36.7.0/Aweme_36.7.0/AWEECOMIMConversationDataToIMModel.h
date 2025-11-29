@class NSString;
@protocol IESIMThirdPartyMessageMetaInfoProtocol;

@interface AWEECOMIMConversationDataToIMModel : NSObject <IESIMThirdPartyConversationMetaInfoProtocol>

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) long long countStatus;
@property (nonatomic) int badgeCount;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) int importantBadgeCount;
@property (nonatomic) int readImportantBadgeCount;
@property (nonatomic) int hintReadBadgeCount;
@property (nonatomic) int hintReadImportantBadgeCount;
@property (retain, nonatomic) id<IESIMThirdPartyMessageMetaInfoProtocol> lastMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isWithin14days:(double)a0;
+ (long long)msgUnreadCountWithinDaysFromCache;
+ (long long)msgUnreadCountWithinDaysDefault;

- (id)initWithCellModel:(id)a0;
- (id)initWithConversation:(id)a0 shopName:(id)a1;
- (void).cxx_destruct;

@end
