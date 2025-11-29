@class NSString, NSMutableDictionary, AWEGeneralBusinessConfigModel;
@protocol AWESearchHotSpotDiscussDistributeManagerDelegate;

@interface AWESearchHotSpotDiscussDistributeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *loadmoreParamsMap;
@property (retain, nonatomic) NSMutableDictionary *cardViewModelsMap;
@property (retain, nonatomic) AWEGeneralBusinessConfigModel *bussinessConfigModel;
@property (weak, nonatomic) id<AWESearchHotSpotDiscussDistributeManagerDelegate> delegate;
@property (nonatomic) BOOL hasHotSpotDiscussPage;
@property (nonatomic) long long headerCardCount;
@property (nonatomic) long long currentSelectTab;
@property (copy, nonatomic) NSString *currentSearchKeyword;
@property (nonatomic) long long sceneType;

+ (id)defaultLoadmoreParamsWithTabType:(long long)a0;

- (void)updateWithBussinessConfigModel:(id)a0;
- (id)buildFakeInsertCommentCardWithCommentInfo:(id)a0 WithContext:(id)a1;
- (id)p_generateInsertComponent:(id)a0 WithContext:(id)a1;
- (void)clearCurrentTabData;
- (id)getPrefetchTabDataRequestParamsForTab:(long long)a0;
- (id)obtainLoadmoreParamsModelForTab:(long long)a0;
- (void)setupLoadmoreParamsModelForTab:(long long)a0 withModel:(id)a1;
- (id)obtainTabCardViewModelsForTab:(long long)a0;
- (void)setupCardViewModelsForTab:(long long)a0 withModelsArray:(id)a1;
- (id)getRecentPublishCommentCardWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
