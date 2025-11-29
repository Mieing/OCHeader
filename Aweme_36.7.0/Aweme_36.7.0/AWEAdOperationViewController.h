@class AWEAwemeModel, NSString, UIView;
@protocol AWEAdOperationContentView;

@interface AWEAdOperationViewController : UIViewController <AWEAdOperationViewController>

@property (retain, nonatomic) UIView<AWEAdOperationContentView> *operationContentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long cardStatusCode;
@property (copy, nonatomic) NSString *formType;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ downloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showFromView:(id)a0 model:(id)a1;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1 cardStatusCode:(unsigned long long)a2;
- (void)preloadOperationWithModel:(id)a0 onView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupUI;

@end
