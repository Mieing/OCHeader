@class WCFinderPhotoProgressBarInitParams, NSMutableArray;
@protocol WCFinderPhotoProgressBarDelegate;

@interface WCFinderPhotoProgressBar : UIView

@property (retain, nonatomic) WCFinderPhotoProgressBarInitParams *params;
@property (nonatomic) unsigned long long numberOfBars;
@property (retain, nonatomic) NSMutableArray *backgroundBars;
@property (retain, nonatomic) NSMutableArray *fillBars;
@property (retain, nonatomic) NSMutableArray *progressValues;
@property (nonatomic) unsigned long long currentIndex;
@property (weak, nonatomic) id<WCFinderPhotoProgressBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfBars:(unsigned long long)a1 params:(id)a2;
- (void)setupUI;
- (void)clearSubviews;
- (void)updateNumberOfBars:(unsigned long long)a0;
- (void)updateProgressAtIndex:(long long)a0 progress:(double)a1;
- (void)_setProgress:(double)a0 atIndex:(long long)a1;
- (void)_setProgress:(double)a0 atIndex:(long long)a1 animated:(BOOL)a2 duration:(double)a3;
- (void)_createProgressBarAtIndex:(long long)a0;
- (void)layoutSubviews;
- (void)layoutProgressBars;
- (void)handleTapGesture:(id)a0;
- (void).cxx_destruct;

@end
