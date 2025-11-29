@class NSString, AWEIMDouyinRedPacketInfoResponse, NSDictionary;
@protocol AWEIMMessageProtocol;

@interface AWEIMDouyinRedPacketMessage : AWEIMMessage <AWEIMSpecialEffectAnimateProtocol, AWEIMMessageTextTriggerSpecialEffectProtocol, AWEIMMessageConfigProtocol, AWEIMDouyinRedPacketMessageProtocol>

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *refTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *bottomTitle;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *info;
@property (copy, nonatomic) NSString *coverId;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *openMode;
@property (copy, nonatomic) NSString *openCommand;
@property (copy, nonatomic) NSString *recvUserIDs;
@property (nonatomic) long long redPacketChannel;
@property (copy, nonatomic) NSString *coverSubTitle;
@property (readonly, nonatomic) BOOL isMultiRandom;
@property (readonly, nonatomic) BOOL isBlessRedPacket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)canShowSpecialEffect;
- (id)contentEffectKeyword;
- (BOOL)isCommandRedPacket;
- (BOOL)isFace2FacePrivateRedPacket;
- (BOOL)isAudioRedPacket;
- (BOOL)isCameraRedPacket;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
