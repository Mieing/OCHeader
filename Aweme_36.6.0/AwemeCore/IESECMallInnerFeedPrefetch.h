@class IESECMallInnerFeedRecommendResponse, NSError, IESECMallInnerFeedNode;

@interface IESECMallInnerFeedPrefetch : NSObject

@property (weak, nonatomic) IESECMallInnerFeedNode *node;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) IESECMallInnerFeedRecommendResponse *firstScreenData;
@property (retain, nonatomic) NSError *firstScreenError;
@property (copy, nonatomic) id /* block */ firstScreenBlock;
@property (retain, nonatomic) NSError *activityError;

- (void)fetchPreloadCardsWithCompletion:(id /* block */)a0;
- (void)fetchFirstScreenWithCompletion:(id /* block */)a0;
- (void)registerFirstScreenCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
