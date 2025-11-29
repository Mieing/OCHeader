@class BDECPigeonUnReadCountModel, NSString, NSDictionary, NSNumber;

@interface LSIMCustomerCellModel : NSObject

@property (retain, nonatomic) BDECPigeonUnReadCountModel *unreadCountNew;
@property (copy, nonatomic) NSString *conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lastContent;
@property (nonatomic) long long unreadNumber;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *lastMessageTimeStr;
@property (copy, nonatomic) NSString *serverMessageId;
@property (nonatomic) double updateTime;
@property (copy, nonatomic) NSString *clickType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *conversationSessionID;
@property (retain, nonatomic) NSNumber *conversationStatus;
@property (copy, nonatomic) NSDictionary *unreadCountDataDict;

+ (id)modelCustomPropertyMapper;

- (void)clearUnreadCount;
- (void)updateUnreadCountNew;
- (BOOL)enableUnreadV2;
- (void).cxx_destruct;
- (id)init;
- (void)bind;

@end
