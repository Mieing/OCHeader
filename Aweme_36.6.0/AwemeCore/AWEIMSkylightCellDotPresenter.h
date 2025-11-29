@class UIColor, NSString, NSURL, UIImage;

@interface AWEIMSkylightCellDotPresenter : AWEIMSkylightBasePresenter

@property (nonatomic) unsigned long long componentViewPosition;
@property (retain, nonatomic) UIColor *dotColor;
@property (copy, nonatomic) NSString *dotColorStr;
@property (copy, nonatomic) NSURL *dotUrl;
@property (retain, nonatomic) UIImage *placeHolder;

- (void)updateView:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSize;
- (void)configWithDotInfo:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
