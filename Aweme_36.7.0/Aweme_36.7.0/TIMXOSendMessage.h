@class TIMXOReferMessageInfo, NSString, NSMutableDictionary, NSDictionary, NSDate, NSArray, TIMXSDKInstance;

@interface TIMXOSendMessage : MTLModel {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *preferredUUID;
@property (retain, nonatomic) NSDate *preferredDate;
@property (nonatomic) BOOL skipSend;
@property (copy, nonatomic) NSString *overrideMessageID;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *parentConversationId;
@property (retain, nonatomic) NSMutableDictionary *files;
@property (nonatomic) BOOL appendOldClientMessageIdToExt;
@property (nonatomic) long long forceOrderIndex;
@property (nonatomic) long long forceSenderID;
@property (copy, nonatomic) NSString *forceSenderSecID;
@property (nonatomic) BOOL writeDBSync;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *clientExt;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (retain, nonatomic) TIMXOReferMessageInfo *referMessageInfo;
@property (retain, nonatomic) NSDictionary *userDefinedPropertyMap;

- (void)setNeedToSyncWithOldSDK;
- (void)overrideExistingMessageContentWithMessageIdentifier:(id)a0;
- (void)addReferMessage:(long long)a0 messageType:(long long)a1 hint:(id)a2;
- (void)enableWriteDBSyncOnMessageSend;
- (void)replaceUserDefinedPropertyMap:(id)a0;
- (void)skipRealSendAndMarkAsFailed;
- (void)skipRealSendAndMarkAsSendingFileParts;
- (void)addRemoteFileWithDisplayType:(id)a0 remotePath:(id)a1 mimeType:(id)a2 md5:(id)a3 length:(long long)a4 fileType:(id)a5 ext:(id)a6;
- (void)addLocalFileSendWithDisplayType:(id)a0 localFileURL:(id)a1 mimeType:(id)a2 fileType:(id)a3 ext:(id)a4;
- (void)fakeSender:(long long)a0;
- (void)skipRealSendAndMarkAsSent;
- (void)addFilesFromMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
