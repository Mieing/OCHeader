@class NSString, UIView;
@protocol AWEIMSkylightBaseComponentProtocol;

@interface AFDSkylightBasePresenter : NSObject <AWEIMSkylightBasePresenterProtocol>

@property (weak, nonatomic) id<AWEIMSkylightBaseComponentProtocol> currentComponent;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGSize { double width; double height; } componentViewSize;
@property (nonatomic) struct CGPoint { double x; double y; } componentViewOrigin;
@property (nonatomic) BOOL belongAvatarContainer;
@property (nonatomic) BOOL displayEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
