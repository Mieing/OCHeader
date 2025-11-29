@class NSObject, NSString, UIView;
@protocol LSAdditionalViewDelegate;

@interface LSAdditionalView : UIView <LSAdditionalViewProtocol>

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double heightValue;
@property (nonatomic) BOOL heightChangedLinkageList;
@property (weak, nonatomic) NSObject<LSAdditionalViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
