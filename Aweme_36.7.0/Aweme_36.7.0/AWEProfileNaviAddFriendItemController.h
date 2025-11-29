@class AWEProfileNavigationButton, NSString;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNaviAddFriendItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) AWEProfileNavigationButton *addFriendButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)profileContext;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (id)recommendFriendRedDotNode;
- (id)navigationItemView;
- (id)getButtonText;
- (id)commonComponent;
- (void)addFriendButtonClicked:(id)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end
