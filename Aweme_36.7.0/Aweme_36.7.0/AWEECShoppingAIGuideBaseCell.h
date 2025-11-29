@class AWEECShoppingAIGuideContext;
@protocol AWEECShoppingAIGuideBaseCellDelegate;

@interface AWEECShoppingAIGuideBaseCell : UICollectionViewCell

@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (weak, nonatomic) id<AWEECShoppingAIGuideBaseCellDelegate> delegate;

- (BOOL)animateFromLeft;
- (void)playAppearAnimation;
- (void).cxx_destruct;
- (id)animatingView;

@end
