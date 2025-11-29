@class UILabel, YYLabel, UIView;

@interface AWEIMQuotedTextConentView : UIView

@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (retain, nonatomic) UILabel *invisibleStatusLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *quoteReplyVerticalLineView;

- (id)imageDisplayAttributedStringForMsg:(id)a0;
- (id)quoteContentAttributes;
- (void)updateChatBackgroundChanged:(BOOL)a0;
- (void)configWithMsg:(id)a0 position:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
