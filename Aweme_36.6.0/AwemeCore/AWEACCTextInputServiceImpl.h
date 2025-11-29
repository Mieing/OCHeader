@class NSString, AWEVideoPublishViewModel;

@interface AWEACCTextInputServiceImpl : NSObject <ACCTextInputServiceProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditing:(id)a0 enterFrom:(id)a1;
- (void)commitTracker:(id)a0;
- (void)configWithPublishViewModel:(id)a0;
- (void)fetchHashtagsWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)savedPrivateHashtags;
- (id)savedHashtags;
- (id)creatUserServiceInstance;
- (void)p_fetchChallengeHistoryWithCompletion:(id /* block */)a0;
- (void)p_searchHashtagWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)p_searchChallengeParamsWithKeyword:(id)a0;
- (id)p_interveneHashTagParams;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;

@end
