@class NSString;

@interface FlowIMX.SearchLocalDBConversationsRequest : NSObject <NSObject> {
    void /* function */ query;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long count;

- (void).cxx_destruct;
- (id)init;

@end
