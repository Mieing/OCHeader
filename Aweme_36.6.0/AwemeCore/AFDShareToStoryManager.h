@class NSDictionary, NSString, AFDFrequencyCountRule;

@interface AFDShareToStoryManager : NSObject <AWEPublishTaskMessage, AFDShareToStoryManagerProtocol>

@property (retain, nonatomic) AFDFrequencyCountRule *showNewStoryPopViewTimesRule;
@property (nonatomic) BOOL isMineNewStory;
@property (nonatomic) BOOL newStoryPopViewWillShow;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (BOOL)shouldShowNewStoryPopView;
- (id)eduTypeText;
- (void)showNewStoryPopViewTimesRuleAddCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
