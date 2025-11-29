@class NSMutableArray, NSArray, NSString, AWENewsAISmartBackgroundViewModel, AWENewsAISmartHeaderViewModel, AWENewsAISmartFeedContainerViewModel, AWENewsAISmartExitButtonViewModel;

@interface AWENewsAISmartViewModel : NSObject

@property (nonatomic) BOOL shouldShowMainTab;
@property (nonatomic) long long defaultTabIndex;
@property (copy, nonatomic) NSArray *forceIDList;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *redirectSchema;
@property (retain, nonatomic) AWENewsAISmartFeedContainerViewModel *defaultContainerViewModel;
@property (retain, nonatomic) AWENewsAISmartFeedContainerViewModel *trackContainerViewModel;
@property (retain, nonatomic) AWENewsAISmartBackgroundViewModel *backgroundViewModel;
@property (retain, nonatomic) AWENewsAISmartHeaderViewModel *headerViewModel;
@property (retain, nonatomic) AWENewsAISmartExitButtonViewModel *exitViewModel;
@property (retain, nonatomic) NSMutableArray *mainTabViewModels;
@property (nonatomic) BOOL isSticky;

- (struct CGSize { double x0; double x1; })tabBarSize;
- (void)p_configMainTabViewModelsWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
