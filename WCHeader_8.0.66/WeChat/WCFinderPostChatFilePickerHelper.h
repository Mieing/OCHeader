@class NSString, NSArray, MMUIViewController, MMUINavigationController, WCFinderFilePickLimiter;

@interface WCFinderPostChatFilePickerHelper : NSObject <SessionSelectControllerDelegate, MMUIViewControllerDelegate, MsgFileBrowseViewControllerDelegate, WAMsgSelectViewControllerDelegate>

@property (retain, nonatomic) NSString *fileType;
@property (retain, nonatomic) NSArray *extension;
@property (retain, nonatomic) MMUIViewController *fromVC;
@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (retain, nonatomic) WCFinderFilePickLimiter *limiter;
@property (retain, nonatomic) NSString *choosedUserName;
@property (copy, nonatomic) id /* block */ onComplete;
@property (copy, nonatomic) id /* block */ onCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showChatFilePicker:(id)a0 limiter:(id)a1 fromVC:(id)a2 complete:(id /* block */)a3 cancel:(id /* block */)a4;

- (void)dealloc;
- (id)init;
- (void)showSessionSelect;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (BOOL)onShouldSelectContact:(id)a0;
- (id)getViewController;
- (void)onMsgFileSelectFinish:(id)a0;
- (void)onMsgFileSelectCancel;
- (void)onMsgSelectFinish:(id)a0 hd:(BOOL)a1;
- (void)onMsgSelectCancel;
- (void)handleLocalFileWithPath:(id)a0;
- (void)checkCancel;
- (void)checkFinishWithErrMsg:(id)a0;
- (void)checkFinishWithErr:(id)a0 url:(id)a1 extra:(id)a2;
- (void)checkFinishWithErr:(id)a0 url:(id)a1 extra:(id)a2 cancel:(BOOL)a3;
- (void).cxx_destruct;

@end
