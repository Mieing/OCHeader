@class NSString, NSArray, NSDictionary, FlowIMClientControllerParam;

@interface FlowIMX.FlowIMReeditedRequest : NSObject <NSObject> {
    void /* function */ localMessageId;
    void /* function */ messageId;
    void /* function */ localMessageIds;
    void /* function */ messageIds;
    void /* function */ collectionId;
    void /* function */ content;
    void /* function */ ext;
    void /* function */ bizExt;
    void /* function */ appletPayload;
}

@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSArray *localMessageIds;
@property (nonatomic, copy) NSArray *messageIds;
@property (nonatomic, copy) NSString *collectionId;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDictionary *ext;
@property (nonatomic, copy) NSDictionary *bizExt;
@property (nonatomic, retain) FlowIMClientControllerParam *clientControllerParam;
@property (nonatomic, copy) NSDictionary *appletPayload;

- (void).cxx_destruct;
- (id)init;

@end
