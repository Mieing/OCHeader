@class AWEMultiElementContainer, NSArray, NSString, AWEElementBuilder, AWEAwemeModel, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEMultiElementContainerViewModel : NSObject <AWEMultiElementContainerViewModelProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak, nonatomic) AWEMultiElementContainer *elementContainer;
@property (retain, nonatomic) AWEElementBuilder *elementBuilder;
@property (retain, nonatomic) NSArray *filterStrategyIDs;
@property (retain, nonatomic) NSArray *layoutStrategyIDs;
@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
