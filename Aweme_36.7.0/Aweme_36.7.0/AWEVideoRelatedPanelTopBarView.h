@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface AWEVideoRelatedPanelTopBarView : UIView <AWEVideoRelatedPanelTopBarViewProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL isDCStyle;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UIImageView *videoPlayIcon;
@property (retain, nonatomic) UIButton *returnButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UILabel *relatedLabel;
@property (copy, nonatomic) id /* block */ didTapTopLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCoverURL:(id)a0 isLandscapeCover:(BOOL)a1;
- (void)setCoverImageHidden:(BOOL)a0;
- (id)themeColorTransformedFrom:(id)a0;
- (id)initWithDCStyle:(BOOL)a0;
- (id)initWithDCStyle:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tapTopLabelAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
