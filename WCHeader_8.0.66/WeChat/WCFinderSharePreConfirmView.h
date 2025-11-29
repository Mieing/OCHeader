@class WCFinderShareCoverImageView, MMUIButton, SightIconView;

@interface WCFinderSharePreConfirmView : UIView

@property (retain, nonatomic) WCFinderShareCoverImageView *coverImageView;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) MMUIButton *memberFlagButton;
@property (nonatomic) double coverWidth;

- (id)init;
- (void)renderWithFinderShareItem:(id)a0;
- (struct CGSize { double x0; double x1; })coverSizeWithMediaItem:(id)a0;
- (void).cxx_destruct;

@end
