@class NSArray, NSString, UIView;

@interface IESGCPDetailTwoActionButtonView : IESGCPDetailBaseView <IESGCPDetailTwoActionButtonProtocol, IESGCPDetailRowButtonAnimateProtocol>

@property (retain, nonatomic) NSArray *childrenNode;
@property (retain, nonatomic) NSArray *childrenControl;
@property (retain, nonatomic) NSArray *childrenView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (readonly, nonatomic) NSString *launchButtonType;
@property (readonly, nonatomic) NSString *downloadButtonButtonType;
@property (readonly, nonatomic) BOOL isHaveTwoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)swapTwoActionButtonWidth:(id /* block */)a0 completion:(id /* block */)a1 animationDuration:(double)a2;
- (void)addChildSubview:(id)a0 toParentView:(id)a1;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
