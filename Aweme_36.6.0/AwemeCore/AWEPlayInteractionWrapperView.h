@class NSArray, NSMutableArray;

@interface AWEPlayInteractionWrapperView : UIView

@property (retain, nonatomic) NSMutableArray *initialAreas;
@property (retain, nonatomic) NSArray *finalAreas;
@property (retain, nonatomic) NSMutableArray *subviewsArray;
@property (retain, nonatomic) NSMutableArray *hideAreas;
@property (retain, nonatomic) NSMutableArray *addAreas;
@property (retain, nonatomic) NSMutableArray *hideSubviewsArray;
@property (retain, nonatomic) NSMutableArray *addSubViewsArray;
@property (retain, nonatomic) NSMutableArray *moveHideSubViewsArray;
@property (retain, nonatomic) NSMutableArray *moveAddSubViewsArray;
@property (retain, nonatomic) NSArray *firstAreas;
@property (retain, nonatomic) NSMutableArray *firstSubviewsArray;

- (id)getImageView;
- (void)initButtonWithAreas:(id)a0;
- (double)wrapperViewWidth;
- (void)updateButtonWithFinalAreas:(id)a0;
- (id)getStartViewWithAreaModel:(id)a0;
- (id)getEndViewWithAreaModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getEndFrameWithAreaModel:(id)a0;
- (void)filterWithTranslateArray:(id)a0;
- (void)resetButtonView;
- (void)setUpButtonWithAreas:(id)a0;
- (id)getTextLabel;
- (void)updateWrapperContent;
- (void)updateSubviewsFrameWithIndex:(long long)a0;
- (void)startAlphaAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
