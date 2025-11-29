@class AWEHPChannelBubbleTask, AWEHomePageBubbleModel, UIView;
@protocol AWEHomePageBubbleProtocol;

@interface AWEFeedContainerViewControllerBubbleObject : NSObject

@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (retain, nonatomic) AWEHomePageBubbleModel *bubbleModel;
@property (retain, nonatomic) AWEHPChannelBubbleTask *task;
@property (retain, nonatomic) id<AWEHomePageBubbleProtocol> popover;

+ (id)getBubbleModelWithChannelBubbleModel:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
