@class NSString, NSArray;

@interface AWESearchHPHistoryConversationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSArray *queryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryListJSONTransformer;
+ (id)merge:(id)a0 withConversations:(id)a1;
+ (id)concat:(id)a0 withConversations:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void)addQueriesFromPatch:(id)a0;
- (void).cxx_destruct;

@end
