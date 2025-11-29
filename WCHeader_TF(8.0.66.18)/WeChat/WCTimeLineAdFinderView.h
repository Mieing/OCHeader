@class NSString, SightIconView, MMWebImageView, UIView;

@interface WCTimeLineAdFinderView : WCContentItemBaseView <WCFinderShareAbstractCell>

@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) MMWebImageView *contentImageView;
@property (retain, nonatomic) UIView *hlView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0;
+ (struct CGSize { double x0; double x1; })getImageSizeWithWidth:(double)a0 andHeight:(double)a1;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)doShareAnimation;
- (id)getImageUrl:(id)a0;
- (void).cxx_destruct;

@end
