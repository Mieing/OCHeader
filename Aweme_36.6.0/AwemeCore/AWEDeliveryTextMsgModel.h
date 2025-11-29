@class AWEDeliveryTextComponentModel;

@interface AWEDeliveryTextMsgModel : AWEDeliveryBaseMsgModel

@property (retain, nonatomic) AWEDeliveryTextComponentModel *textModel;
@property (nonatomic) struct CGSize { double width; double height; } textTotalDisplaySize;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInsets;
+ (Class)cellClass;

- (void)reBuildCellFullContentHeight;
- (struct CGSize { double x0; double x1; })textContentSize;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
