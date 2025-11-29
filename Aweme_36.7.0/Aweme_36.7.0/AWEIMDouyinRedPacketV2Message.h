@class NSString, NSDictionary;
@protocol AWEIMMessageProtocol;

@interface AWEIMDouyinRedPacketV2Message : AWEIMDouyinRedPacketMessage <AWEIMDouyinRedPacketV2MessageProtocol>

@property (copy, nonatomic) NSString *ownerId;
@property (copy, nonatomic) NSString *ownerAvatar;
@property (nonatomic) double redPacketCreateTime;
@property (nonatomic) double redPacketEndTime;
@property (readonly, copy, nonatomic) NSString *orderId;
@property (readonly, copy, nonatomic) NSString *redPacketId;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *refTitle;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *bottomTitle;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) id info;
@property (readonly, copy, nonatomic) NSString *coverId;
@property (readonly, nonatomic) long long coverType;
@property (readonly, copy, nonatomic) NSString *coverUrl;
@property (readonly, copy, nonatomic) NSString *openMode;
@property (readonly, copy, nonatomic) NSString *openCommand;
@property (readonly, copy, nonatomic) NSString *recvUserIDs;
@property (nonatomic) long long redPacketChannel;
@property (readonly, copy, nonatomic) NSString *coverSubTitle;
@property (readonly, nonatomic) BOOL isMultiRandom;
@property (readonly, nonatomic) BOOL isBlessRedPacket;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *fromUid;
@property (readonly, copy, nonatomic) NSString *secFromUid;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, nonatomic) long long serverMessageID;
@property (readonly, nonatomic) long long aweType;
@property (readonly, nonatomic) long long quoteReplyMessageType;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) long long messageState;
@property (readonly, nonatomic) NSDictionary *syncedExt;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSString *petAIStyle;
@property (readonly, nonatomic) id<AWEIMMessageProtocol> quoteReplyOriginMessage;
@property (copy, nonatomic) NSDictionary *aiExt;
@property (copy, nonatomic) NSDictionary *aiBusinessExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRedPacketEndedWithSyncedExt:(id)a0 localExt:(id)a1;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)avatarArray;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)didCurrentUserParticipate;
- (BOOL)isRedPacketEnded;
- (BOOL)isRedPacketInOpenState;
- (void).cxx_destruct;

@end
