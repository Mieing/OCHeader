@class NSArray, UIViewController, NSString;
@protocol AWETabListHeaderViewControllerProtocol;

@interface AWEDCFeedTabListConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) UIViewController<AWETabListHeaderViewControllerProtocol> *headerViewController;
@property (retain, nonatomic) id headerModel;
@property (copy, nonatomic) NSArray *tabItemModelArray;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long defaultLandingTab;
@property (copy, nonatomic) NSString *enterHomepageTabProcessID;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
