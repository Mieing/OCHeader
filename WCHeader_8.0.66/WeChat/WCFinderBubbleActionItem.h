@class WCFinderBubbleReadyRequirements;

@interface WCFinderBubbleActionItem : NSObject

@property (copy, nonatomic) id /* block */ availableCheckBlock;
@property (copy, nonatomic) id /* block */ prepareAnimationBlock;
@property (copy, nonatomic) id /* block */ showAnimationBlock;
@property (copy, nonatomic) id /* block */ dismissAnimationBlock;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) WCFinderBubbleReadyRequirements *requirements;

- (void).cxx_destruct;

@end
