@class NSString, MMFinderLivePkTaskedBonusBarBackgroundHighView, MMFinderLivePkTaskedBonusBarBackgroundLowView;

@interface MMFinderLivePkTaskedBonusBarResultBackgroundView : UIView <MMFinderLivePkTaskedBonusBarBackgroundView>

@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundHighView *succeededBackgroundView;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundLowView *failedBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
