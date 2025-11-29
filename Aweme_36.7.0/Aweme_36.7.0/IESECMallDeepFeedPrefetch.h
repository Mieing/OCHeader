@class IESECMallDeepFeedNode;

@interface IESECMallDeepFeedPrefetch : NSObject

@property (weak, nonatomic) IESECMallDeepFeedNode *node;

- (void)fetchPreloadCardsWithCompletion:(id /* block */)a0;
- (void)fetchFirstScreenWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
