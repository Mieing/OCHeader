@class WCFinderPreviewContainer, ForwardMessageLogicController, WCFinderPreviewActionSheet, UIView, NSString;
@protocol WCFinderPreviewView;

@interface WCFinderPreviewForwarder : MMUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) WCFinderPreviewContainer *previewViewContainer;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (nonatomic) BOOL shouldExit;
@property (retain, nonatomic) WCFinderPreviewActionSheet *actionSheet;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) UIView<WCFinderPreviewView> *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPreview:(id)a0 commentScene:(int)a1;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)show:(id)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)_adjustPreviewDisplay;
- (void)dismiss:(BOOL)a0;
- (id)getCurrentViewController;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetDidDismiss:(id)a0;
- (void)_onForwardToContact:(id)a0;
- (id)createMsgURL;
- (void)_forwardToTimeline;
- (void)_saveImage;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void).cxx_destruct;

@end
