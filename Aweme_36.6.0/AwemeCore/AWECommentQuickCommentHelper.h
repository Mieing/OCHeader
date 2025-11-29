@class NSArray, AWECommentQuickCommentView, NSString;
@protocol AWECommentQuickCommentParentViewController, AWECommentQuickCommentHelperDelegate;

@interface AWECommentQuickCommentHelper : NSObject <AWECommentQuickCommentHelperProtocol>

@property (class, retain, nonatomic) NSArray *constantWords;
@property (class, retain, nonatomic) NSArray *timedWords;

@property (weak, nonatomic) id<AWECommentQuickCommentHelperDelegate> delegate;
@property (weak, nonatomic) id<AWECommentQuickCommentParentViewController> quickCommentParentViewController;
@property (retain, nonatomic) AWECommentQuickCommentView *quickCommentView;
@property (nonatomic) BOOL shouldShowQuickCommentView;
@property (nonatomic) BOOL displayingQuickCommentView;
@property (nonatomic) BOOL shouldShowQuickCommentForLuckyDraw;
@property (retain, nonatomic) NSArray *luckyWords;
@property (retain, nonatomic) NSArray *hotWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)onClickHotWordView:(id)a0 isInMiniEmoticonBar:(BOOL)a1;
- (void)resetQuickCommentWords;
- (BOOL)shouldShowQuickCommentViewWithInputViewRised:(BOOL)a0;
- (void)dismissQuickCommentView;
- (BOOL)canReplyCommentWithModel:(id)a0;
- (void)showQuickCommentViewWithInputViewRised:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
