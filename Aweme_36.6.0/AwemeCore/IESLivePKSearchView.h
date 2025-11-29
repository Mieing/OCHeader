@class IESLivePKSearchViewConfig, UIImageView, UIVisualEffectView, UILabel;

@interface IESLivePKSearchView : UIView

@property (retain, nonatomic) UIImageView *searchBackgroundView;
@property (retain, nonatomic) UIImageView *searchGuideImage;
@property (retain, nonatomic) UILabel *guidanceLabel;
@property (retain, nonatomic) UIImageView *historyHintImageView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) IESLivePKSearchViewConfig *config;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ clickHistoryBlock;
@property (nonatomic) BOOL editing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updateWithSearchModel:(id)a0 isActivity:(BOOL)a1;
- (void)showPKRecordVC;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
