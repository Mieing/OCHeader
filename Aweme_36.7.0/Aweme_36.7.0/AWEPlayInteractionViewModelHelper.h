@class NSString;
@protocol AWEPlayInteractionViewModelProtocol;

@interface AWEPlayInteractionViewModelHelper : NSObject <AWEPlayInteractionViewModelHelper>

@property (weak, nonatomic) id<AWEPlayInteractionViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)referString;
- (id)logExtraDict;
- (id)enterFrom;
- (id)fromModel;
- (id)interactor_fromModel;
- (BOOL)isFromHighValueUserRecommend;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_trackFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (void)addClickSearchResultVideoTrackForParams:(id)a0;
- (void)p_trackUnFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (id)awe_innnerFeedPageBtmIdentifier;
- (void)p_trackFollow:(BOOL)a0 Method:(id)a1 enterMethod:(id)a2;
- (BOOL)shouldTrackFollowCard;
- (BOOL)shouldTrackFollowFromCard;
- (id)model;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)context;

@end
