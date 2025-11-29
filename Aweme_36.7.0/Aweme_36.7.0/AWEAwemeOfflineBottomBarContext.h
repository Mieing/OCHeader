@class NSString, NSDictionary, AWEAwemeModel, UIViewController;

@interface AWEAwemeOfflineBottomBarContext : NSObject <AWEAwemeDetailBottomBarCommonContextProtocol>

@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enterEcomLiveVideoHybrid;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *liteTaskInfo;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *businessDict;
@property (nonatomic) BOOL canShowBottomBarInListCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
