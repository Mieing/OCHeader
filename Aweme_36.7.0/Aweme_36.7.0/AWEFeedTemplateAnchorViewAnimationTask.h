@class CAMediaTimingFunction;

@interface AWEFeedTemplateAnchorViewAnimationTask : NSObject

@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) id /* block */ verifyBlock;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (copy, nonatomic) id /* block */ animationBlock;

- (void).cxx_destruct;

@end
