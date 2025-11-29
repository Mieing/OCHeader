@class NSMutableDictionary, AWEVideoPublishViewModel;

@interface ACCAIGCChallengeServiceImpl : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) NSMutableDictionary *cacheChangeIDs;

- (id)initWithPublishModel:(id)a0;
- (void)handleChallenge:(id)a0;
- (void)p_requestChallengeItemArrays:(id)a0 effect:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
