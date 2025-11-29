@class NSString, NSMutableArray;

@interface MMWindowMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_WindowMgrObjArr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showNewWindowMgrObj:(id)a0 withAnimated:(int)a1;
- (void)insertNewWindowMgrObj:(id)a0;
- (BOOL)isCanInsert:(id)a0;
- (BOOL)isExsitVCClassName:(Class)a0;
- (BOOL)isExsitVCObj:(id)a0;
- (BOOL)isMaxLevel:(int)a0;
- (BOOL)shouldShowWindow:(id)a0;
- (BOOL)isTopViewController:(id)a0;
- (id)getWinMgrObjByVC:(id)a0;
- (id)getMainWindow;
- (void)closeWindowWithViewController:(id)a0 andAnimation:(int)a1;
- (void)closeWindowWithViewController:(id)a0 andAnimation:(int)a1 completion:(id /* block */)a2;
- (void)showTopWindow;
- (id)getMainSceneTopWindow;
- (id)getMainSceneTopVisibleWindow;
- (id)getTopWindow;
- (id)getVisibleTopMainSceneWindow:(Class)a0;
- (BOOL)isContainVisibleWindowGreaterThan:(id)a0;
- (BOOL)isContainWindowObj:(id)a0;
- (id)getTopWindowLess:(int)a0;
- (void)doWindowClose:(id)a0 isTop:(BOOL)a1 WithCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
