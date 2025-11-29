@class NSArray, NSMutableArray, WCFinderLBSCardWordingListStyle;

@interface WCFinderLBSCardWordingListView : UIView

@property (copy, nonatomic) NSArray *wordings;
@property (retain, nonatomic) NSMutableArray *wordingLabels;
@property (nonatomic) unsigned long long lineNumber;
@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) WCFinderLBSCardWordingListStyle *style;

+ (id)layoutPropertiesWithWordings:(id)a0 lineNumber:(unsigned long long)a1 width:(double)a2;
+ (double)heightWithWordings:(id)a0 lineNumber:(unsigned long long)a1 width:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(id)a1;
- (void)updateStyle:(id)a0;
- (void)layoutSubviews;
- (void)updateWithWordings:(id)a0 lineNumber:(unsigned long long)a1;
- (void)updateUI;
- (void)ensureWordingLabels;
- (id)createDescWordingLabel;
- (void).cxx_destruct;

@end
