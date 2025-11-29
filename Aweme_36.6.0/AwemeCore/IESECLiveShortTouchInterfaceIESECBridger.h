@class NSString;
@protocol IESLiveActivityXModule;

@interface IESECLiveShortTouchInterfaceIESECBridger : NSObject <IESECLiveShortTouchInterface>

@property (retain, nonatomic) id<IESLiveActivityXModule> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)hasCoupon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameOfAnimationView;
- (void)insertItem:(id)a0 completion:(id /* block */)a1;
- (id)createPluginView;
- (id)createShortItem;
- (void)removeCoupon;
- (void)startEntranceAnimation:(id)a0 appearAction:(id /* block */)a1;
- (BOOL)enableEntranceAnimation;
- (BOOL)entranceScaleAnimationDisabled;
- (long long)requestToShowTempStateWithItem:(id)a0 strategy:(long long)a1;
- (void)adjustToTempStateWidthWithItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsType:(unsigned long long)a0;
- (void)removeType:(unsigned long long)a0;

@end
