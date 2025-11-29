@class LSIMMessageRichTextModel;

@interface LSIMMessageRichTextCellViewModel : LSIMMessageCardBaseCellVM

@property (retain, nonatomic) LSIMMessageRichTextModel *richTextModel;

- (void)handleMessage;
- (void)callPhoneWithPhoneNums:(id)a0;
- (BOOL)disableCopy;
- (void)showOrderListAction;
- (void)showGoodListAction;
- (void)linkActionWithLink:(id)a0;
- (void).cxx_destruct;

@end
