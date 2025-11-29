@class NSString, NSDictionary, FlowIMClientControllerParam;

@interface FlowIMX.FlowIMReSendRequest : NSObject <NSObject> {
    void /* function */ localMessageId;
    void /* function */ ext;
    void /* function */ bizExt;
    void /* function */ appletPayload;
}

@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, copy) NSDictionary *ext;
@property (nonatomic, copy) NSDictionary *bizExt;
@property (nonatomic, retain) FlowIMClientControllerParam *clientControllerParam;
@property (nonatomic, copy) NSDictionary *appletPayload;

- (void).cxx_destruct;
- (id)init;

@end
