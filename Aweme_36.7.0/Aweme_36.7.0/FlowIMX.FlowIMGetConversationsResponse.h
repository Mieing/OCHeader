@class NSArray, NSString;

@interface FlowIMX.FlowIMGetConversationsResponse : NSObject {
    void /* function */ result;
}

@property (nonatomic, readonly) NSArray *result;
@property (nonatomic, readonly) long long pageIndex;
@property (nonatomic, readonly) BOOL hasMore;
@property (nonatomic, readonly) NSString *description;

- (id)initWithResult:(id)a0 pageIndex:(long long)a1 hasMore:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
