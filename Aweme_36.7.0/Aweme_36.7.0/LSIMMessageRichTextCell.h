@class NSArray, LSIMMessageRichTextCellViewModel;

@interface LSIMMessageRichTextCell : LSIMMessageTextCellView

@property (retain, nonatomic) LSIMMessageRichTextCellViewModel *rawCellVM;
@property (copy, nonatomic) NSArray *phoneNums;

- (void)configWithCellVM:(id)a0;
- (void)handleHighlightedAction:(id)a0;
- (void)linkActionWithContent:(id)a0;
- (void)showOrderListAction;
- (void)showGoodListAction;
- (void)showToastActionWithContent:(id)a0;
- (void)handleCallPhoneActionWithContent:(id)a0;
- (id)makeMessageAttributedString;
- (void).cxx_destruct;

@end
