@class AWEUserLoginNavigationBarContext, NSString, UIView;

@interface AWEUserNavigationBarComponent : NSObject <AWEUserLoginNavigationBarDelegate, AWEUserContainerNaviBarComponentProtocol>

@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) AWEUserLoginNavigationBarContext *naviBarContext;
@property (nonatomic) long long navigationBarAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)skipAction;
- (void)setupComponentView;
- (void)helpAction;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (unsigned long long)componentType;
- (id)componentView;

@end
