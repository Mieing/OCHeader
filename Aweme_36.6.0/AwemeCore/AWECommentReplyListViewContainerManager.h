@class NSString, AWECommentPanelParams, NSDictionary, UIViewController;
@protocol AWECommentListViewControllerProtocol;

@interface AWECommentReplyListViewContainerManager : NSObject <DUXSheetDelegate, AWECommentReplyListViewControllerProtocol> {
    void /* function */ inputLocateAt;
    void /* unknown type, empty encoding */ commentTreeVC;
    void /* function */ extraParams;
    void /* function */ referString;
    void /* function */ didDismissBlock;
}

@property (nonatomic, copy) NSString *inputLocateAt;
@property (nonatomic, retain) AWECommentPanelParams *params;
@property (nonatomic, retain) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL needDisplyHeader;
@property (nonatomic) BOOL isForcedToShowInputView;
@property (nonatomic) unsigned long long headerViewType;
@property (nonatomic) unsigned long long commentPanelHeightScreenRatio;
@property (nonatomic) unsigned long long containerSceneType;
@property (nonatomic, copy) NSDictionary *extraParams;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) id /* block */ didDismissBlock;

- (void)sheetDidDismiss:(id)a0;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)showCommentTreeReplyListViewContainerWithCommentModel:(id)a0 generalModel:(id)a1 didShownBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
