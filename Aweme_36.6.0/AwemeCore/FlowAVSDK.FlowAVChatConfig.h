@class NSString, NSDictionary;

@interface FlowAVSDK.FlowAVChatConfig : NSObject {
    void /* function */ uid;
    void /* function */ conversationID;
    void /* function */ callID;
    void /* function */ localCallID;
    void /* function */ botID;
    void /* function */ lastSecionID;
    void /* function */ lastMessageIndex;
    void /* function */ lastMessageCursor;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, copy) NSString *callID;
@property (nonatomic, copy) NSString *localCallID;
@property (nonatomic, copy) NSString *botID;
@property (nonatomic, copy) NSString *lastSecionID;
@property (nonatomic, copy) NSString *lastMessageIndex;
@property (nonatomic, copy) NSString *lastMessageCursor;
@property (nonatomic, copy) NSDictionary *extra;

- (id)initWithUid:(id)a0 conversationID:(id)a1 callID:(id)a2 localCallID:(id)a3 botID:(id)a4 lastSectionID:(id)a5 lastMessageIndex:(id)a6 lastMessageCursor:(id)a7 extra:(id)a8;
- (void).cxx_destruct;
- (id)init;

@end
