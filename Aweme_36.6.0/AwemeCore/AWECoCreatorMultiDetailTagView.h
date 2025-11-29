@class UILabel, UIView;

@interface AWECoCreatorMultiDetailTagView : UIView

@property (nonatomic) BOOL isSignificant;
@property (retain, nonatomic) UIView *titleLayerView;
@property (retain, nonatomic) UIView *subtitleLayerView;
@property (retain, nonatomic) UILabel *significantTitleLabel;
@property (retain, nonatomic) UILabel *significantSubtitleLabel;
@property (retain, nonatomic) UILabel *normalTitleLabel;

- (id)initWithTitle:(id)a0 subtitle:(id)a1 isSignificant:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
