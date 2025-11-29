@class NSString, IESECRecommendItemModel, IESECRecommendFeedbackView;

@interface IESECRecommendBaseViewCell : UICollectionViewCell <IESECRecommendFeedbackViewDelegate, IESECRecommendCell>

@property (retain, nonatomic) IESECRecommendItemModel *itemModel;
@property (retain, nonatomic) IESECRecommendFeedbackView *feedbackMaskingView;
@property (nonatomic) long long maskAppearType;
@property (copy, nonatomic) id /* block */ tapDislikeBlock;
@property (copy, nonatomic) id /* block */ tapLiveBlock;
@property (copy, nonatomic) id /* block */ tapProductBlock;
@property (copy, nonatomic) id /* block */ tapRecommendReasonBlock;
@property (nonatomic) BOOL shouldShowFindSimilar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForRecommendItem:(id)a0 containerWidth:(double)a1;

- (void)setupBaseUI;
- (void)longPressGestureAction:(id)a0;
- (void)tapGestureForType:(long long)a0;
- (void)configureWithRecommendItem:(id)a0 shouldShowDislikeMask:(BOOL)a1;
- (void)updateDislikeMask;
- (void)updateDislikeMaskWithTapType:(long long)a0;
- (void)handleDislikeMask:(BOOL)a0;
- (void)recommendFeedbackView:(id)a0 didClickAtItem:(id)a1;
- (void)recommendFeedbackViewDidCLickBackButton:(id)a0;
- (void)recommendFeedbackViewDidClose:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldShowFindSimilar:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
