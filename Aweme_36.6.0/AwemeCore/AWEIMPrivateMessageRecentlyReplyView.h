@class UILabel, NSArray, UIStackView;
@protocol AWEIMPrivateMessageRecentlyReplyViewDelegate;

@interface AWEIMPrivateMessageRecentlyReplyView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIStackView *recentEmoticonView;
@property (retain, nonatomic) NSArray *recentlyUsedEmoticons;
@property (weak, nonatomic) id<AWEIMPrivateMessageRecentlyReplyViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowRecentlyUsedEmmoticons;

- (void)p_setupLayout;
- (void)updateRecentlyUsedEmoticons;
- (void)didTapEmoticonButton:(id)a0;
- (void)p_loadRecentlyUsedEmoticon;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
