@class UIColor, NSString, UILabel, UIView;

@interface MMFinderLivePkTaskedBonusBarDebriefingContentView : UIView <MMFinderLivePkTaskedBonusBarHighlightedContentView>

@property (retain, nonatomic) UIView *scaleContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) double pointOfInterestInLabel;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } highlightedPointOfInterest;
@property (readonly, nonatomic) UIColor *contentShadowColor;
@property (readonly, nonatomic) NSString *currentPreferredGiftId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
