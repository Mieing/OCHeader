@class AWEPageContext, AFDBaseElementContainer, UIView;

@interface AFDBaseElement : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) long long serialNumber;
@property (weak, nonatomic) AWEPageContext *context;
@property (weak, nonatomic) id actionHandler;
@property (weak, nonatomic) AFDBaseElementContainer *elementContainer;
@property (readonly, nonatomic) BOOL isAddedToContainer;

- (void)elementContainerDidUpdate;
- (void)elementDidLoad;
- (void)elementDidInit;
- (void)elementDidAppear;
- (void)elementDidDisappear;
- (void).cxx_destruct;
- (id)init;

@end
