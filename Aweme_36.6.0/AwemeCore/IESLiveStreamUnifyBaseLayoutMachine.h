@class IESLiveStreamUnifyLayoutContext, NSMutableDictionary, NSString;
@protocol IESLiveStreamUnifyLayoutPlayer, IESLiveStreamPlayerLayoutMachineDelegate;

@interface IESLiveStreamUnifyBaseLayoutMachine : NSObject <IESLiveStreamUnifyLayoutMachine>

@property (retain, nonatomic) IESLiveStreamUnifyLayoutContext *context;
@property (weak, nonatomic) id<IESLiveStreamUnifyLayoutPlayer> player;
@property (retain, nonatomic) NSMutableDictionary *layoutImpDict;
@property (nonatomic) unsigned long long previousType;
@property (weak, nonatomic) id<IESLiveStreamPlayerLayoutMachineDelegate> delegate;
@property (readonly, nonatomic) unsigned long long currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)addLayoutAttribute:(id)a0 value:(id)a1;
- (void)removeLayoutAttribute:(id)a0;
- (id)customLayouts;
- (id)supportSEILayoutTypes;
- (void)clearPreviousPlayerLayoutParams;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (void)layoutWithVideoSize:(struct CGSize { double x0; double x1; })a0 containerView:(id)a1;
- (void)layoutWithType:(unsigned long long)a0;
- (void)updateMediaContainer:(id)a0;
- (void)updateRoomModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameWithLayoutType:(unsigned long long)a0;
- (id)layoutClassNameInType:(unsigned long long)a0;
- (void)didRegisterAllLayouts;
- (id)bizTransparentParams;
- (id)layoutImpWithRoomScene:(long long)a0;
- (void)p_layoutWithImpObj:(id)a0;
- (id)commonLayouts;
- (id)supportedLayouts;
- (BOOL)p_shouldUseLayoutForKey:(id)a0 withRoomScene:(long long)a1;
- (void)p_resiterAllLayouts;
- (id)p_registerLayoutImpWithClass:(Class)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0 context:(id)a1;

@end
