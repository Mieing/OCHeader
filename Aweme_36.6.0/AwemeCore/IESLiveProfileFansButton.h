@class UILabel, UIImageView;

@interface IESLiveProfileFansButton : IESLiveButton

@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
@property (retain, nonatomic) UILabel *fansClubLevel;
@property (retain, nonatomic) UIImageView *joinedFansClubImage;

- (void)updateFansStatus:(id)a0 fansLevel:(id)a1;
- (void)layoutComponentsIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutComponents;

@end
