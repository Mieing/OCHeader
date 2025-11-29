@class NSString, NSArray, AWENewsAISmartTabConfig, AWENewsAISmartLoadTimeModel;

@interface AWENewsAISmartFeedContainerViewModel : NSObject

@property (nonatomic) BOOL shouldShowSubTab;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *forceIDList;
@property (retain, nonatomic) AWENewsAISmartTabConfig *maintabConfig;
@property (copy, nonatomic) NSArray *subtabConfigs;
@property (nonatomic) double subTabLeftMargin;
@property (copy, nonatomic) id /* block */ containerProvider;
@property (nonatomic) BOOL hasRedirect;
@property (retain, nonatomic) AWENewsAISmartLoadTimeModel *loadTimeModel;

- (struct CGSize { double x0; double x1; })subTabBarSize;
- (double)feedTopPadding;
- (void).cxx_destruct;
- (id)pageName;

@end
