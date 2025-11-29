@class NSString, AWEIMMessageViewModel, UIView, YYLabel;

@interface AWEIMMessageBaseHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) UIView *timeLabelBgView;
@property (nonatomic) double labelWidth;
@property (weak, nonatomic) AWEIMMessageViewModel *animatingCellVM;
@property (copy, nonatomic) NSString *belongingToConversationID;

+ (double)timeLabelMarginTop;
+ (id)identifier;

- (void)layoutSubviews;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithText:(id)a0 chatHasBackground:(BOOL)a1;
- (void)p_adaptNoticeLabelV2:(id)a0 hasChatBg:(BOOL)a1;
- (double)labelWidthWithText:(id)a0;
- (void)adaptNoticeLabel:(id)a0 hasChatBg:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)dealloc;

@end
