@class UIImageView, NSMutableDictionary, NSString;

@interface IESLiveECAudienceShopCartPreloadService : IESLiveGeneralBaseService <IESLiveECAudienceShopCartPreloadService>

@property (nonatomic) BOOL showCart;
@property (nonatomic) BOOL containerDidLoad;
@property (nonatomic) BOOL fakeShopCartShowed;
@property (retain, nonatomic) UIImageView *fakeCartView;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)didSetAttachingDIContext;
- (void)serviceDidLaunch;
- (void)toolbarItemsChange;
- (void)liveComponentDidLoaded;
- (id)infoBeforeCartRealShowed;
- (void)p_calculateShowCartIfNeeded;
- (void)p_showFakeCartViewIfNeeded;
- (void)p_removeFakeCartView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_fakeCartFrame;
- (void).cxx_destruct;
- (void)dealloc;

@end
