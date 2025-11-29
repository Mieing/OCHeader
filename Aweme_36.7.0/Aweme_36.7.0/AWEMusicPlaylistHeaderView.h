@class UIStackView, NSString, UILabel, UIButton;
@protocol AWEMusicPlaylistHeaderViewDelegate;

@interface AWEMusicPlaylistHeaderView : UIView

@property (retain, nonatomic) UIButton *btn;
@property (retain, nonatomic) UILabel *titleLB;
@property (retain, nonatomic) UIStackView *horizontaLine;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<AWEMusicPlaylistHeaderViewDelegate> delegate;
@property (nonatomic) BOOL needShowDescLabel;
@property (copy, nonatomic) NSString *descInfo;

- (void)btnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
