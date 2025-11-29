@class NSString, IESLiveGCDTimer, UIView, NSNumber, HTSLiveHighlightAreaPriorityConfig;

@interface IESLivePSComponentConfigModel : NSObject

@property (nonatomic) BOOL isEqualWidthWithPublicScreen;
@property (nonatomic) double delayTime;
@property (nonatomic) double targetTimeStamp;
@property (nonatomic) double allowExceedTime;
@property (nonatomic) double maxAcceptDelayTime;
@property (nonatomic) long long priorityLowerJudgeAction;
@property (nonatomic) long long priorityEqualJudgeAction;
@property (nonatomic) long long priorityHigherJudgeAction;
@property (nonatomic) BOOL shouldRecycle;
@property (nonatomic) long long recycleMode;
@property (nonatomic) BOOL isPermanentDisplay;
@property (nonatomic) BOOL isAssemble;
@property (copy, nonatomic) NSString *assembleIdentifier;
@property (nonatomic) BOOL removeWhileOrientationChanged;
@property (nonatomic) double startShowTimeStamp;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double handleTimeInterval;
@property (weak, nonatomic) UIView *componentView;
@property (readonly, copy, nonatomic) NSString *bizType;
@property (readonly, nonatomic) NSNumber *targetPublicScreenID;
@property (readonly, nonatomic) long long targetPublicScreenContainerType;
@property (readonly, nonatomic) Class componentViewClazz;
@property (copy, nonatomic) NSString *interactType;
@property (copy, nonatomic) NSString *areaType;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *areaPriorityConfig;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double duration;
@property (nonatomic) struct CGSize { double width; double height; } componentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) id extraData;
@property (nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ preCheckToAdd;
@property (copy, nonatomic) id /* block */ preCheckToShow;
@property (copy, nonatomic) id /* block */ componentViewProduced;

- (id)initConfigModelWithBizType:(id)a0 targetContainerType:(long long)a1 bindViewClazz:(Class)a2;
- (id)initConfigModelWithBizType:(id)a0 targetPublicScreenID:(id)a1 targetContainerType:(long long)a2 bindViewClazz:(Class)a3;
- (void).cxx_destruct;
- (id)description;

@end
