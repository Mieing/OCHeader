@class NSString, NSArray, NSDictionary, FlowIMClientControllerParam, FlowIMReferenceInfo;

@interface FlowIMX.FlowIMSendRequest : NSObject <NSObject> {
    void /* function */ senderId;
    void /* function */ conversationId;
    void /* function */ bizContentType;
    void /* function */ localMessageId;
    void /* unknown type, empty encoding */ createTime;
    void /* function */ content;
    void /* function */ ttsContent;
    void /* function */ tags;
    void /* function */ ext;
    void /* function */ bizExt;
    void /* unknown type, empty encoding */ isAsrMessage;
    void /* function */ botId;
    void /* function */ localMessageIDList;
    void /* function */ localSuggestOptions;
    void /* function */ reeditMsgId;
    void /* function */ collectionId;
    void /* unknown type, empty encoding */ subMsgIndex;
    void /* function */ referMsgId;
    void /* unknown type, empty encoding */ uploadStatus;
    void /* function */ appletPayload;
    void /* function */ traceID;
}

@property (nonatomic, copy) NSString *senderId;
@property (nonatomic) long long userType;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic) long long contentType;
@property (nonatomic, copy) NSString *bizContentType;
@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, retain) FlowIMReferenceInfo *referenceInfo;
@property (nonatomic) long long messageStatus;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *ttsContent;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, copy) NSDictionary *ext;
@property (nonatomic, copy) NSDictionary *bizExt;
@property (nonatomic, copy) NSString *botId;
@property (nonatomic, copy) NSArray *localMessageIDList;
@property (nonatomic, copy) NSArray *localSuggestOptions;
@property (nonatomic, copy) NSString *reeditMsgId;
@property (nonatomic, copy) NSString *collectionId;
@property (nonatomic) BOOL isSubMessage;
@property (nonatomic, copy) NSString *referMsgId;
@property (nonatomic, retain) FlowIMClientControllerParam *clientControllerParam;
@property (nonatomic, copy) NSDictionary *appletPayload;
@property (nonatomic, copy) NSString *traceID;
@property (nonatomic) BOOL hasLocalMessage;
@property (nonatomic) BOOL needNotifyToBiz;

- (void).cxx_destruct;
- (id)init;

@end
