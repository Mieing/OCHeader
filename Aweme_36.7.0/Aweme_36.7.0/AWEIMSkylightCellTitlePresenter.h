@class NSString, UIColor;

@interface AWEIMSkylightCellTitlePresenter : AWEIMSkylightBasePresenter

@property (copy, nonatomic) NSString *titleStr;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;

- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
