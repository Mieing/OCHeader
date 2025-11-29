@class WCFinderCommentSearchMentionHeaderView, WCFinderCommentContactSelectView, NSString;
@protocol WCFinderCommentSearchMentionContainerViewDelegate;

@interface WCFinderCommentSearchMentionContainerView : UIView <WCFinderCommentSearchMentionHeaderViewDelegate>

@property (retain, nonatomic) WCFinderCommentSearchMentionHeaderView *headerView;
@property (retain, nonatomic) WCFinderCommentContactSelectView *contactSelectView;
@property (weak, nonatomic) id<WCFinderCommentSearchMentionContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithDelegate:(id)a0;
- (void)resetSearchView;
- (void)setupContactSelectView;
- (void)cancelSearch;
- (void)reloadLatestCommentMentionedContacts;
- (void)resignResponder;
- (void)onClickCloseCommentSearchMentionHeaderBtn;
- (void).cxx_destruct;

@end
