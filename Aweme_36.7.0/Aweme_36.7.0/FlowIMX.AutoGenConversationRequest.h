@class NSString, NSArray;

@interface FlowIMX.AutoGenConversationRequest : NSObject <NSObject> {
    void /* function */ conversationName;
    void /* function */ setupDesc;
    void /* function */ botIDs;
    void /* function */ uidList;
}

@property (nonatomic, copy) NSString *conversationName;
@property (nonatomic, copy) NSString *setupDesc;
@property (nonatomic, copy) NSArray *botIDs;
@property (nonatomic, copy) NSArray *uidList;
@property (nonatomic) BOOL isGenName;

- (id)initWithConversationName:(id)a0 setupDesc:(id)a1 botIDs:(id)a2 uidList:(id)a3 isGenName:(BOOL)a4;
- (void).cxx_destruct;
- (id)init;

@end
