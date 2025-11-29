@class BaseMsgContentLogicController, NSMutableArray, NSString;

@interface MMMsgLogicManager : MMUserService <MMServiceProtocol, IMMLanguageMgrExt, IMMFontMgrExt, IContactMgrExt, IMMNewSessionMgrExt> {
    NSMutableArray *_arrLogicControllers;
    BaseMsgContentLogicController *_topLogicController;
    BaseMsgContentLogicController *_weixinLogicController;
    BaseMsgContentLogicController *_roomLogicController;
    BaseMsgContentLogicController *_lastPeekController;
}

@property (retain, nonatomic) NSMutableArray *arrLogicControllers;
@property (retain, nonatomic) BaseMsgContentLogicController *topLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTopLogicController;
- (void)cleanUp;
- (void)cleanArrLogicControllers;
- (void)cleanUpLogicByName:(id)a0;
- (void)CheckIfTopViewControllerPoped;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)onDeleteContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteSession:(unsigned int)a0;
- (void)onPluginsChanged:(id)a0;
- (void)onServiceMemoryWarning;
- (Class)GetLogicClassByContact:(id)a0;
- (void)setMsgLogicToCache:(id)a0;
- (id)GetLogicControllerFromCacheWithContact:(id)a0;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)a0;
- (void)PushLogicController:(id)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)PushLogicController:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)PushLogicControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 jumpToLocationNode:(id)a3;
- (void)ShowPageSheetLogicControllerByContact:(id)a0 pageSheetDelegate:(id)a1 fromViewController:(id)a2 animated:(BOOL)a3;
- (void)ShowPageSheetLogicControllerByContact:(id)a0 pageSheetDelegate:(id)a1 toMessage:(id)a2 fromViewController:(id)a3 animated:(BOOL)a4 complete:(id /* block */)a5;
- (void)ShowPageSheetLogicControllerByContact:(id)a0 pageSheetDelegate:(id)a1 toMessage:(id)a2 fromViewController:(id)a3 animated:(BOOL)a4 extraInfo:(id)a5 complete:(id /* block */)a6;
- (void)ShowPageSheetLogicController:(id)a0 pageSheetDelegate:(id)a1 fromViewController:(id)a2 animated:(BOOL)a3 complete:(id /* block */)a4;
- (void)cleanUnuseLogicController;
- (void)PushLogicControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 jumpToLocationNode:(id)a3 reuse:(BOOL)a4 extraInfo:(id)a5;
- (void)PushLogicControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 jumpToLocationNode:(id)a3 reuse:(BOOL)a4 extraInfo:(id)a5 completion:(id /* block */)a6;
- (void)makeMsgLogicController:(id)a0 jumpToMsg:(id)a1 reuse:(BOOL)a2 extraInfo:(id)a3 callback:(id /* block */)a4;
- (void)OpenMsgWindowByContact:(id)a0 jumpToLocationNode:(id)a1 reuse:(BOOL)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (void)PushOtherBaseMsgControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)PushOtherBaseMsgControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 searchScene:(unsigned long long)a3;
- (void)PushOtherBaseMsgControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 extraInfo:(id)a3;
- (void)PushOtherBaseMsgControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 searchScene:(unsigned long long)a3 extraInfo:(id)a4;
- (void)PushOtherBaseMsgControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 searchScene:(unsigned long long)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
- (id)GenOtherBaseMsgControllerByContact:(id)a0 searchScene:(unsigned long long)a1 extraInfo:(id)a2;
- (void)PushSearchLogicControllerByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 animated:(BOOL)a3 fromeScene:(unsigned long long)a4 highlighted:(BOOL)a5;
- (void)PushSearchLogicControllerByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 animated:(BOOL)a3 fromeScene:(unsigned long long)a4;
- (void)PushSearchLogicControllerByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 animated:(BOOL)a3 fromeScene:(unsigned long long)a4 userData:(id)a5;
- (void)PushSearchLogicControllerByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 animated:(BOOL)a3 fromeScene:(unsigned long long)a4 userData:(id)a5 highlighted:(BOOL)a6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 ForKeywordList:(id)a3 animated:(BOOL)a4;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 ForKeywordList:(id)a3 highlighted:(BOOL)a4 animated:(BOOL)a5;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 ForKeywordList:(id)a3 highlighted:(BOOL)a4 animated:(BOOL)a5 extraInfo:(id)a6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)a0 navigationController:(id)a1 ForMessageWrap:(id)a2 ForKeywordList:(id)a3 highlighted:(BOOL)a4 animated:(BOOL)a5 extraInfo:(id)a6 completion:(id /* block */)a7;
- (void)PushSpecLogicControllerByContact:(id)a0 navigationController:(id)a1;
- (void)PushNewLogicController:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 jumpToLocationNode:(id)a3;
- (void)PushOtherLogicController:(id)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)PushOtherLogicController:(id)a0 fromViewController:(id)a1 pageSheetDelegate:(id)a2 jumpMessage:(id)a3 animated:(BOOL)a4 complete:(id /* block */)a5;
- (void)MakeSureKeepOtherLogicController:(id)a0;
- (void)PresentMultiSelectLogicControllerByContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2 onComplete:(id /* block */)a3;
- (void)PopLogicController:(id)a0;
- (void)PopLogicController:(id)a0 withReuse:(BOOL)a1;
- (id)GetCurrentLogicController;
- (id)GetLogicController:(id)a0;
- (id)logicControllerForPeekingWithContact:(id)a0 messageWrap:(id)a1;
- (void)finishedPeekingWithController:(id)a0;
- (void).cxx_destruct;

@end
