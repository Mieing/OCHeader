@class NSString, NSArray, NSDictionary;

@interface FlowIMX.FlowIMConfirmRegenerateMsgRequest : NSObject <NSObject> {
    void /* function */ conversationId;
    void /* function */ regenRootID;
    void /* function */ messageIDList;
    void /* function */ appletPayload;
}

@property (nonatomic) long long conversationType;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *regenRootID;
@property (nonatomic) long long groupIndex;
@property (nonatomic, copy) NSArray *messageIDList;
@property (nonatomic, copy) NSDictionary *appletPayload;

- (void).cxx_destruct;
- (id)init;

@end
