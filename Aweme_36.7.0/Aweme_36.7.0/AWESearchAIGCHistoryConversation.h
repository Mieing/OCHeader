@class NSString;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCHistoryConversation : NSObject

@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> rootNode;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;

@end
