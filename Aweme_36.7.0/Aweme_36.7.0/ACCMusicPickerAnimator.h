@class NSString, UIView;
@protocol ACCPanelViewProtocol;

@interface ACCMusicPickerAnimator : NSObject <ACCPanelAnimator>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<ACCPanelViewProtocol> target;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ animationWillStart;
@property (copy, nonatomic) id /* block */ animationDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationType:(unsigned long long)a0;
- (void)animate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;

@end
