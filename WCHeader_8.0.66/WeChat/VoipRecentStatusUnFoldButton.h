@class _TtC6WeChat13DNDReportItem, CContact, UILabel;

@interface VoipRecentStatusUnFoldButton : UIView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) _TtC6WeChat13DNDReportItem *dndReportItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isDoNotDisturbMode;
@property (nonatomic) BOOL isUsingMPUI;

- (id)initWithContact:(id)a0;
- (void)exposed;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
