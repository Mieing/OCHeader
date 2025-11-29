@class NSString, IESLiveAnchorRankListsStatusApi;

@interface IESLiveAnchorRankListPreferenceIMP : NSObject <IESLiveAnchorRankListPreferenceService>

@property (retain, nonatomic) IESLiveAnchorRankListsStatusApi *anchorRankListsStatusApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRankListStatus:(unsigned long long)a0;
- (unsigned long long)rankListStatus;
- (void)fetchRankListStatusWithCompletion:(id /* block */)a0;
- (void)updateRankListStatusWithRankName:(id)a0 status:(long long)a1 completion:(id /* block */)a2;
- (id)anchorRankListSwitchKey;
- (void).cxx_destruct;

@end
