@class UIImageView, AWEPOITagRateGradeModel;

@interface AWEPOIUGCRateSingleStarView : UIView

@property (retain, nonatomic) AWEPOITagRateGradeModel *grade;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UIImageView *unselectedIcon;
@property (retain, nonatomic) UIImageView *selectedIcon;

- (void)preDownload;
- (id)initWithGrade:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateWtihUnselected:(id)a0 selected:(id)a1 animaiton:(id)a2;
- (void).cxx_destruct;

@end
