@class IESECCommentSKUContext, NSString, IESECCommentSKUViewModel, UIView, IESECCommentSKUView;
@protocol IESECCommentSKUDelegate;

@interface IESECCommentSKUViewController : UIViewController <IESECCommentSKUViewDelegate>

@property (retain, nonatomic) IESECCommentSKUContext *skuContext;
@property (retain, nonatomic) IESECCommentSKUView *skuView;
@property (retain, nonatomic) IESECCommentSKUViewModel *skuModel;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<IESECCommentSKUDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearRecord;
- (void)tapDismiss;
- (double)popoverContentHeight;
- (void)removeFromParentViewWithClearRecord:(BOOL)a0;
- (id)initWithSKUContext:(id)a0;
- (void)tapConfirmWithSKUParams:(id)a0;
- (void)tapContainerView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
