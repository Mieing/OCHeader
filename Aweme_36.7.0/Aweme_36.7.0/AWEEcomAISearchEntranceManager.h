@class NSObject, NSString, AWEEcomAISearchResultViewModel;
@protocol AWEEcomAISearchEntranceManagerDelegate;

@interface AWEEcomAISearchEntranceManager : NSObject

@property (retain, nonatomic) AWEEcomAISearchResultViewModel *aiSearchTabViewModel;
@property (weak, nonatomic) NSObject<AWEEcomAISearchEntranceManagerDelegate> *delegate;
@property (copy, nonatomic) NSString *lastQuery;

- (id)enterFrom;
- (id)enterFromSecond;
- (id)ecomSceneId;
- (void)enterAISearchWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
