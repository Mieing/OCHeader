@class NSArray, FlowIMCocoError, NSString;

@interface FlowIMX.FlowIMGetMessageListResponse : NSObject <NSObject> {
    void /* function */ messages;
}

@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) BOOL hasMore;
@property (nonatomic, readonly) FlowIMCocoError *error;
@property (nonatomic, readonly) NSString *description;

- (id)initWithMessages:(id)a0 hasMore:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
