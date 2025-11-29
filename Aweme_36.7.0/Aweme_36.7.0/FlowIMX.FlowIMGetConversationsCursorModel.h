@class NSString;

@interface FlowIMX.FlowIMGetConversationsCursorModel : FlowIMX.FlowIMCursorModel

@property (nonatomic) long long pagingState;
@property (nonatomic) long long convVersion;
@property (nonatomic) long long pageIndex;
@property (nonatomic, readonly) NSString *description;

- (id)initWithIndex:(long long)a0 limit:(long long)a1 type:(long long)a2;
- (id)initWithPagingState:(long long)a0 convVersion:(long long)a1 pageIndex:(long long)a2 index:(long long)a3 limit:(long long)a4 type:(long long)a5;

@end
