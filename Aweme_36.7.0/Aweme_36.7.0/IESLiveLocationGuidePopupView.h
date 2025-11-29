@class IESLiveLocationStore, UIView;
@protocol IESLiveLocationAction;

@interface IESLiveLocationGuidePopupView : HTSLivePopUpView

@property (weak, nonatomic) IESLiveLocationStore *store;
@property (retain, nonatomic) UIView *headImageView;
@property (retain, nonatomic) UIView *nameLabel;
@property (retain, nonatomic) UIView *hintLabel;
@property (retain, nonatomic) UIView *openBtn;
@property (retain, nonatomic) id<IESLiveLocationAction> locationDispatcher;

- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (void)openLocation;
- (void).cxx_destruct;
- (void)layoutUI;

@end
