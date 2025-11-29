@class UIFont, NSArray, UIColor, NSMutableArray;
@protocol AWEPOIGradeSelectableViewDelegate;

@interface AWEPOIGradeSelectableView : AWEPOITouchThroughView

@property (copy, nonatomic) NSArray *grades;
@property (retain, nonatomic) NSMutableArray *gradeLabelArray;
@property (nonatomic) BOOL isOutsideSet;
@property (weak, nonatomic) id<AWEPOIGradeSelectableViewDelegate> delegate;
@property (nonatomic) unsigned long long singleDirection;
@property (retain, nonatomic) UIFont *singleTextFont;
@property (retain, nonatomic) UIColor *singleTextColor;
@property (retain, nonatomic) UIColor *singleSelectedTextColor;
@property (retain, nonatomic) UIColor *singleBackgroundColor;
@property (retain, nonatomic) UIColor *singleSelectedBackgroundColor;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) double singleGradeCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } singleTextEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } singleImageEdgeInsets;
@property (nonatomic) double singleGradeSpace;
@property (nonatomic) double singleGradeHeight;
@property (nonatomic) struct CGSize { double width; double height; } singleImageSize;

- (id)p_createGradeLabelWithGradeModel:(id)a0;
- (void)p_gradeLabelDidTapped:(id)a0;
- (void)p_gradedeLabelDidSelected:(id)a0;
- (void)p_newGradeContainerViewTapped:(id)a0;
- (void)cancelSelected;
- (id)selectedGrade;
- (void)newUpdateWithGradeArray:(id)a0;
- (void)updateWithGradeArray:(id)a0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
