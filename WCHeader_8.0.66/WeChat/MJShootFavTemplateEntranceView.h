@class UIImpactFeedbackGenerator, MJToolbarButton, MMWebImageView, MMUIButton, MMUILabel;
@protocol MJShootFavTemplateEntranceViewDelegate;

@interface MJShootFavTemplateEntranceView : MMUIView

@property (retain, nonatomic) MMWebImageView *authorIconView;
@property (retain, nonatomic) MMUILabel *authorNoteLabel;
@property (retain, nonatomic) MMUILabel *authorNameLabel;
@property (retain, nonatomic) MMUIButton *authorContainerButton;
@property (retain, nonatomic) MJToolbarButton *favButton;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<MJShootFavTemplateEntranceViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithFavTemplateItem:(id)a0;
- (void)authorContainerButtonDidTouchUpInside:(id)a0;
- (void)favButtonDidTouchUpInside:(id)a0;
- (void)updateWithIsFavorite:(BOOL)a0;
- (struct CGSize { double x0; double x1; })favIconSize;
- (void).cxx_destruct;

@end
