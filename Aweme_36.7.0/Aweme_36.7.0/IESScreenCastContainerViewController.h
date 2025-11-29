@class NSString, IESScreenCastContainerView;

@interface IESScreenCastContainerViewController : UIViewController <IESScreenCastContainerViewControllerAdapter>

@property (retain, nonatomic) IESScreenCastContainerView *containerView;
@property (copy, nonatomic) id /* block */ didAddClarityChooseViewControllerBlock;
@property (copy, nonatomic) id /* block */ willRemoveClarityChooseViewControllerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
