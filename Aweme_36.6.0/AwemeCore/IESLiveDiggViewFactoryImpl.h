@class NSString, NSHashTable;
@protocol IESLiveDFAnimationService;

@interface IESLiveDiggViewFactoryImpl : NSObject <CAAnimationDelegate, IESLiveDiggViewFactory>

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) long long singleDiggPathNumber;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (retain, nonatomic) id<IESLiveDFAnimationService> dfAnimationService;
@property (nonatomic) BOOL diSettingEnable;
@property (nonatomic) BOOL reuseDiggView;
@property (retain, nonatomic) NSHashTable *diggViewTable;
@property (retain, nonatomic) NSHashTable *switchDiggViewTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configStartPoint:(struct CGPoint { double x0; double x1; })a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)updateStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)createViewWithImage:(id)a0 urlList:(id)a1 ownDigg:(BOOL)a2;
- (id)newStrategyCreateViewWithImage:(id)a0 ownDigg:(BOOL)a1 showSwitch:(BOOL)a2 avatarList:(id)a3 alphaLevel:(unsigned long long)a4;
- (id)DFAnimation_CreateViewWithImage:(id)a0 ownDigg:(BOOL)a1 showSwitch:(BOOL)a2 avatarList:(id)a3 alphaLevel:(unsigned long long)a4;
- (id)doubleDiggAnimationWith:(id)a0 diggCount:(long long)a1 avatarList:(id)a2;
- (id)createDoubleDiggViewWithImage:(id)a0 animationDuration:(double)a1 scale:(double)a2 endPointxOffset:(double)a3;
- (void)refreshControlPoint;
- (id)_singleDiggPath;
- (id)newStrategyWeakify_singleDiggPathWithOffset:(double)a0 endPointOffset:(double)a1;
- (void)prepareForReuse:(id)a0 size:(double)a1;
- (id)newStrategy_singleDiggPath;
- (void).cxx_destruct;
- (id)init;
- (id)getControlPoints;

@end
