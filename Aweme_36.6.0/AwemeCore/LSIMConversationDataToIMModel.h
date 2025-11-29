@class NSString;
@protocol IESIMThirdPartyMessageMetaInfoProtocol;

@interface LSIMConversationDataToIMModel : NSObject <IESIMThirdPartyConversationMetaInfoProtocol>

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

+ (id)convertIMConversationModelWithCellModel:(id)a0;

- (id)initWithCellModel:(id)a0;
- (void)updateWithPlatformServiceModel:(id)a0;
- (void)updateWithConversationModel:(id)a0;
- (BOOL)logEnable;
- (void).cxx_destruct;

@end
