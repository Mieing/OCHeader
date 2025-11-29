@class IESLiveScrollViewDelegateProxy;

@interface IESLivePopupInsideScrollView : UIScrollView

@property (retain, nonatomic) IESLiveScrollViewDelegateProxy *delegateProxy;
@property (nonatomic) long long popupItemType;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;

@end
