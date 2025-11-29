@class NSString, AnchorSwitchSkinInfo_SelectedValue;

@interface MMFinderLiveCommitAnchorCustomizeRewardCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AnchorSwitchSkinInfo_SelectedValue *commitStyle;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 productId:(id)a1 commitStyle:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
