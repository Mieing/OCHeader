@class NSString, UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECVideoInnerFlowLoadingView : UIView <IESECContentListLifeCycleProtocol>

@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)firstRequestFinish:(BOOL)a0 hasMoreData:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
