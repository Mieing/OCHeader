@class NSString, UIView;

@interface IESECSlidingAbstractTabView : UIView <IESECTabViewElementProtocol>

@property (retain, nonatomic) UIView *sView;
@property (weak, nonatomic) UIView *wView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)view;
- (void)viewDidLoad;
- (id)loadView;
- (BOOL)isViewLoaded;

@end
