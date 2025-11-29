@class NSString, UIImageView, UIImage, UILabel, UITapGestureRecognizer;
@protocol MAOfflineMapSectionHeaderViewDelegate;

@interface MAOfflineMapSectionHeaderView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (weak, nonatomic) id<MAOfflineMapSectionHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long section;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *expandedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expanded:(BOOL)a1;
- (void)setupExpandImageView;
- (void)singleTapGesture:(id)a0;
- (void)setupSeperatedLineView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)toggle;
- (void)setupLabel;
- (void)updateUI;
- (void)setupTapGestureRecognizer;
- (void)notifyDelegate;

@end
