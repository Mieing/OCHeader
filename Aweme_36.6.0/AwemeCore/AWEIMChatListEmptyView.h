@class UILabel, YYLabel;

@interface AWEIMChatListEmptyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) YYLabel *centerAttributeLabel;

- (void)configTitle:(id)a0 detail:(id)a1;
- (double)p_screenWidth;
- (void)configCenterAttributeLabelString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
