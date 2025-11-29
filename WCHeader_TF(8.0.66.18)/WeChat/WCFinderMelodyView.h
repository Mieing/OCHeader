@class UIImageView, UIColor, NSString;
@protocol WCFinderMelodyViewDelegate;

@interface WCFinderMelodyView : UIView <LOTColorValueDelegate>

@property (retain, nonatomic) UIImageView *melodyIconView;
@property (nonatomic) double iconWid;
@property (retain, nonatomic) UIColor *iconColor;
@property (weak, nonatomic) id<WCFinderMelodyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultPlay:(BOOL)a1 iconWid:(double)a2 iconColor:(id)a3;
- (void).cxx_destruct;

@end
