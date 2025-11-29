@class UIControl, NSString, UIView, NSNumber;
@protocol HTSLivePluginLayoutView;

@interface IESLiveShortTouchItem : IESLiveDynamicModel

@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) UIControl *control;
@property (nonatomic) BOOL enhancedTouch;
@property (nonatomic) long long dynamicPriority;
@property (retain, nonatomic) UIView<HTSLivePluginLayoutView> *view;
@property (retain, nonatomic) UIView *entranceView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL hadShowAlphaAnim;
@property (nonatomic) BOOL enableShorTouchNewAnimation;
@property (nonatomic) BOOL useEntranceAnimation;
@property (nonatomic) int hideMode;
@property (nonatomic) unsigned long long configurableType;
@property (copy, nonatomic) id /* block */ iconAppearAction;
@property (copy, nonatomic) id /* block */ itemInsertCompletion;
@property (copy, nonatomic) id /* block */ itemHiddenChanged;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *accessibleName;
@property (copy, nonatomic) id /* block */ triggerTempStateShow;
@property (copy, nonatomic) id /* block */ triggerNormalStateShow;
@property (nonatomic) long long tempStateTriggerDuration;
@property (nonatomic) long long tempStatePriority;
@property (nonatomic) BOOL shouldShowTempStateWidth;
@property (nonatomic) double tempStateTriggerTime;

- (void)bindingAction;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)type;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)didAppear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;

@end
