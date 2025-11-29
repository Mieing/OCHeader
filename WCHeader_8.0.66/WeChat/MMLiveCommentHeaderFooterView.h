@class MMLiveCommentDataItem, MMLiveCommentPubbleCellFrame, MMLiveCommentPubbleCell, MMUIButton;

@interface MMLiveCommentHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell;
@property (retain, nonatomic) MMUIButton *pubbleButton;
@property (nonatomic) BOOL isShowMenu;
@property (nonatomic) BOOL isAudience;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (retain, nonatomic) MMLiveCommentPubbleCellFrame *cellFrame;
@property (nonatomic) long long section;
@property (copy, nonatomic) id /* block */ actionInvokeBloc;

- (void)createPubbleCellWithCellFrame:(id)a0 section:(long long)a1 topSection:(long long)a2;
- (id)initWithReuseIdentifier:(id)a0;
- (void)dealloc;
- (void)onMenuControllerWillHide:(id)a0;
- (void)showMenuItemsForAnchor;
- (double)calculateMenuControllerY;
- (void)onCommentActionTop:(id)a0;
- (void).cxx_destruct;

@end
