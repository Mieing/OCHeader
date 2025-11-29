@class UIImageView, UILabel;
@protocol WCFinderLiveStartPOIViewDelegate;

@interface WCFinderLiveStartPOIView : MMUIButton

@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *poiEduTipsLabel;
@property (nonatomic) BOOL hideLogo;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id<WCFinderLiveStartPOIViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updatePOIViewWith:(id)a0 showEduTipsLabel:(BOOL)a1 hideLogo:(BOOL)a2 maxWidth:(double)a3;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void)heightToFit;
- (double)getPOILabelMaxWidth;
- (void)onClickPOIAction;
- (void).cxx_destruct;

@end
