@class NSString;

@interface AWEPadSplitViewFullScreenTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) double width;
@property (copy, nonatomic) id /* block */ willCancelBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
