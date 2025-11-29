@class NSSet, NSArray, NSString, AWEIMSendMessageAttachmentObject, IESIMSendMessageSecurityCheckContext;
@protocol IESIMShareContextProtocol;

@interface AWEIMSendMessageContainer : NSObject

@property (nonatomic) BOOL finish;
@property (retain, nonatomic) NSSet *otherUserIDs;
@property (retain, nonatomic) NSArray *messages;
@property (retain, nonatomic) NSString *toSessionID;
@property (nonatomic) BOOL isSingleChat;
@property (retain, nonatomic) AWEIMSendMessageAttachmentObject *attachment;
@property (nonatomic) BOOL needShowToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) IESIMSendMessageSecurityCheckContext *securityCheckContext;
@property (copy, nonatomic) NSArray *mentionUsers;
@property (retain, nonatomic) NSArray *textMsgMentionUsers;

+ (id)instanceWithSessionID:(id)a0 messages:(id)a1;
+ (id)instanceWithUserID:(id)a0 messages:(id)a1;

- (void).cxx_destruct;

@end
