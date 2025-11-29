@class NSString;
@protocol IESLLGDContainerPayFooterViewDelegate;

@interface IESLLGDContainerPayFooterView : UIView <IESLLGDContainerDetailPayFootDownGradeProtocol>

@property (weak, nonatomic) id<IESLLGDContainerPayFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadUI;
- (void)onPay:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
