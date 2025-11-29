@class NSString;

@interface FlowIMX.SearchLocalDBMessagesRequest : NSObject <NSObject> {
    void /* function */ query;
    void /* function */ conversationId;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long count;

- (void).cxx_destruct;
- (id)init;

@end
