@class UIView, UILongPressGestureRecognizer, NSURL, UITapGestureRecognizer, NSString, BizAppMsgDetailInfo, WCFileBrowseInfo, UIViewController;

@interface MMLiveScreenSharingBaseViewController : MMCPUIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapBlocker;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressBlocker;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (nonatomic) BOOL blocksSingleTapInContentView;
@property (nonatomic) BOOL blocksLongPressInContentView;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) WCFileBrowseInfo *fileBrowseInfo;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *webURL;
@property (retain, nonatomic) BizAppMsgDetailInfo *bizArticle;
@property (nonatomic) BOOL showsCancelBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)addTargetViewIfNeeded;
- (void)removeTargetViewIfNeeded;
- (void)cancelBarButtonItemDidClick:(id)a0;
- (void)loadGestureBlockers;
- (void)handleSingleTapBlocker:(id)a0;
- (void)handleLongPressBlocker:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
