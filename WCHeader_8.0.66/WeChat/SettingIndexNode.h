@class NSString, WCTableViewCellManager, NSMutableArray, UIViewController;

@interface SettingIndexNode : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) Class viewControllerClass;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) SettingIndexNode *parent;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) NSString *displayPath;
@property (readonly, nonatomic) BOOL shouldShowPath;
@property (retain, nonatomic) WCTableViewCellManager *cellInfoManager;

- (id)initWithTitle:(id)a0;
- (void)addChild:(id)a0;
- (id)pathComponents;
- (void).cxx_destruct;

@end
