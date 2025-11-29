@class AWEHPBubbleLabelLinkContentConfig, UILabel, UIView;

@interface AWEHPBubbleLabelLinkContentView : UIView

@property (retain, nonatomic) AWEHPBubbleLabelLinkContentConfig *config;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *clickView;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupWithConfig:(id)a0;
- (void)handleLinkTap;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)updateUI;

@end
