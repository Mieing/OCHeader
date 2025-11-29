@class NSString, AWEFilterDetailTipView, UIView;

@interface AFDMentionAwemeViewController : AWEAwemeDetailCellViewController

@property (retain, nonatomic) UIView *filterDetailBackgroundView;
@property (retain, nonatomic) AWEFilterDetailTipView *filterDetailTipView;
@property (nonatomic) BOOL isFirstOpenCommentPanelAndInputForced;
@property (retain, nonatomic) NSString *fastReplyCommentID;

- (BOOL)alertIfNotValidForAction:(long long)a0;
- (void)p_addObserver;
- (BOOL)shouldRespondDoubleClick;
- (void)p_showFilterDetailTipViewIfNeeded;
- (void)initInteractController;
- (void)addCommentNotice:(id)a0;
- (id)filterDetailWithAwemeID:(id)a0;
- (void)p_replyComment:(id)a0;
- (void)p_updateIsReplyStatusWithReplyID:(id)a0;
- (void)openMentionAwemeCommentPanelWithEnterSource:(unsigned long long)a0 beginInputSource:(unsigned long long)a1;
- (void)p_replyMention:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
