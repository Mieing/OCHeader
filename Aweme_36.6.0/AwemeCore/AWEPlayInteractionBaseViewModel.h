@class NSString, AWEPlayInteractionContext;
@protocol AWEPlayInteractionViewModelHelper;

@interface AWEPlayInteractionBaseViewModel : NSObject <AWEPlayInteractionViewModelProtocol>

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) id<AWEPlayInteractionViewModelHelper> viewModelHelper;
@property (nonatomic) unsigned long long eventSource;
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
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_trackFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (void)addClickSearchResultVideoTrackForParams:(id)a0;
- (void)p_trackUnFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (id)awe_innnerFeedPageBtmIdentifier;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)extra;
- (void)dealloc;

@end
