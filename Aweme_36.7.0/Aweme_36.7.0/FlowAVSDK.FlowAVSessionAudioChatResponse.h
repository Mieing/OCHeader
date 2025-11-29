@class NSString, NSArray;

@interface FlowAVSDK.FlowAVSessionAudioChatResponse : NSObject {
    void /* function */ content;
    void /* function */ questionID;
    void /* function */ conversationID;
    void /* function */ messageID;
    void /* function */ commandList;
    void /* function */ ttsTaskID;
    void /* function */ drawContent;
    void /* function */ modelType;
    void /* function */ baseResp;
    void /* function */ agentIntention;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic) unsigned long long seqID;
@property (nonatomic) unsigned long long replyType;
@property (nonatomic, copy) NSString *questionID;
@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, copy) NSString *messageID;
@property (nonatomic, copy) NSArray *commandList;
@property (nonatomic, copy) NSString *ttsTaskID;
@property (nonatomic, copy) NSString *drawContent;
@property (nonatomic, copy) NSString *modelType;
@property (nonatomic, copy) NSString *baseResp;
@property (nonatomic, copy) NSString *agentIntention;

- (id)initWithContent:(id)a0 seqID:(unsigned long long)a1 replyType:(unsigned long long)a2 questionID:(id)a3 conversationID:(id)a4 messageID:(id)a5 commandList:(id)a6 ttsTaskID:(id)a7 drawContent:(id)a8 modelType:(id)a9 baseResp:(id)a10 agentIntention:(id)a11;
- (void).cxx_destruct;
- (id)init;

@end
