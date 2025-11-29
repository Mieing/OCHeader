@class NSMutableArray, NSString, AWERVDetailPageContext, UIViewController;
@protocol AWECommentListViewControllerProtocol;

@interface AWERVInteractiveViewModel : NSObject <AWECommentControlVideoStateProtocol>

@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) NSMutableArray *needInsertComments;
@property (nonatomic) BOOL noNeedInsertComment;
@property (nonatomic) BOOL isPausedByComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtraDict;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)addNotifications;
- (void)bindEvent;
- (void)onAddCommentNotification:(id)a0;
- (id)initWithPageContext:(id)a0;
- (void)showCommentPanel;
- (void)refreshCommentVC;
- (void)insertCommentIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
