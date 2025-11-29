@class NSString, NSArray, NSMutableDictionary, MMUINavigationController;

@interface WAJSEventHandler_chooseMessageFile : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate, MMUIViewControllerDelegate, MsgFileBrowseViewControllerDelegate, WAMsgSelectViewControllerDelegate>

@property (retain, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSArray *extension;
@property (nonatomic) long long limitCount;
@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (retain, nonatomic) NSString *choosedUserName;
@property (retain, nonatomic) NSMutableDictionary *resDic;
@property (nonatomic) unsigned long long resWait;
@property (nonatomic) BOOL showingLoading;
@property (nonatomic) BOOL selectCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)showSessionSelect;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (BOOL)onShouldSelectContact:(id)a0;
- (id)calcImgType:(id)a0;
- (void)checkFinish;
- (id)getWebviewController;
- (id)getViewController;
- (void)onMsgFileSelectFinish:(id)a0;
- (void)onMsgFileSelectCancel;
- (void)onMsgSelectFinish:(id)a0 hd:(BOOL)a1;
- (void)onMsgSelectCancel;
- (void).cxx_destruct;

@end
