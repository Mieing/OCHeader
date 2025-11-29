@class MMLiveStrokeLabel;

@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorItemView : UIView

@property (nonatomic) unsigned long long lineIndex;
@property (nonatomic) BOOL removalScheduled;
@property (retain, nonatomic) MMLiveStrokeLabel *label;
@property (nonatomic) double labelCenterX;

- (id)initWithLabel:(id)a0;
- (void)pushUpWithRemovalBlock:(id /* block */)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
