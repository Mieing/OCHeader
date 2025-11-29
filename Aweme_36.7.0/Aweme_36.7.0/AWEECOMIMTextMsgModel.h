@class AWEECOMIMMsgReferenceModel, AWEECOMIMTextComponentModel;

@interface AWEECOMIMTextMsgModel : AWEECOMIMBaseMsgModel

@property (retain, nonatomic) AWEECOMIMTextComponentModel *textModel;
@property (retain, nonatomic) AWEECOMIMMsgReferenceModel *referenceModel;
@property (nonatomic) struct CGSize { double width; double height; } textTotalDisplaySize;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInsets;
+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })textContentSize;
- (void)reBulildCellFullContentHeight;
- (id)markdownMessageString;
- (BOOL)isSupportMarkdown;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
