@class NSArray, FlowIMCocoError;

@interface FlowIMX.FlowIMSendMessageResponse : NSObject <NSObject> {
    void /* function */ messages;
}

@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, retain) FlowIMCocoError *error;

- (id)initWithMessages:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
