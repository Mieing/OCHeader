@class NSString, NSDictionary, AWEAwemeModel, NSObject, UIViewController;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEDouYinSelectUGBottomBarContext : NSObject <AWEAwemeDetailBottomBarCommonContextProtocol, AWEDouYinSelectUGBottomBarContextProtocol>

@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *commonContext;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) BOOL isListCell;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
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
@property (copy, nonatomic) id /* block */ getInteractionContextBlock;

- (void).cxx_destruct;

@end
