@class NSString;

@interface ACCInteractionView : UIView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ interactionBlock;
@property (copy, nonatomic) id /* block */ hitTestBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
