@class NSString, YYTextLayout, NSArray;

@interface AWEECOMIMSystemNotifyMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contentText;
@property (retain, nonatomic) YYTextLayout *contentTextLayout;
@property (copy, nonatomic) NSArray *buttonModelArr;
@property (nonatomic) double contentHeight;

+ (double)designButtonHeight;
+ (id)textContentLayoutWithModel:(id)a0;
+ (double)designTitleHeight;
+ (double)itemSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
+ (Class)cellClass;

- (id)msgDisplayParams;
- (void)reBulildCellFullContentHeight;
- (void)didClickActionButtonWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
