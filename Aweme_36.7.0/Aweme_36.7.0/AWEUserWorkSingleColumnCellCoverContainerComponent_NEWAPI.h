@class AWERLVirtualFlexView;

@interface AWEUserWorkSingleColumnCellCoverContainerComponent_NEWAPI : AWEUserWorkCellCoverContainerComponent_NEWAPI

@property (retain, nonatomic) AWERLVirtualFlexView *blurBackgroundViewContainerVirtualView;

- (id)buildVirtualView:(id)a0;
- (id)coverContainerView;
- (void)setImageCompletionImageView:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void)updateBlurBackgroundWithImageView:(id)a0 image:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
