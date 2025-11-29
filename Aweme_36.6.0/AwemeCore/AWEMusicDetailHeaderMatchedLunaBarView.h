@class UILabel, UIButton;
@protocol AWEMusicDetailHeaderMatchedLunaBarViewDelegate;

@interface AWEMusicDetailHeaderMatchedLunaBarView : UIView

@property (retain, nonatomic) UILabel *preLabel;
@property (retain, nonatomic) UIButton *songButton;
@property (weak, nonatomic) id<AWEMusicDetailHeaderMatchedLunaBarViewDelegate> delegate;

- (id)p_colorWithLightColor:(id)a0 darkColor:(id)a1;
- (void)updateMatchedLunaBarView:(id)a0;
- (void)p_didClickSong;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
