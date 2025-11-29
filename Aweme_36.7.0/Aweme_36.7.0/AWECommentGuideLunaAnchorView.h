@class NSString, UIImageView, UILabel, UIButton;

@interface AWECommentGuideLunaAnchorView : UIView <AWECommentLunaAnchorProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UIButton *songButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ displayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (double)commentAnchorHeight;
- (double)commentLunaAnchorHeight;
- (void)updateSongTitleColor:(id)a0;
- (void)updateWithAnchorTitle:(id)a0 songTitle:(id)a1;
- (void)p_didClickSong;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
