@class NSMapTable, NSString, UIView, NSMutableArray;

@interface CJPayDataSecurityModel : NSObject

@property (nonatomic) BOOL isNeedDataSecurity;
@property (retain, nonatomic) NSMapTable *vcSet;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (weak, nonatomic) UIView *dimView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *settingsSecurityList;
@property (nonatomic) double lastEnterBack;
@property (nonatomic) double lastEnterFore;
@property (copy, nonatomic) NSString *hitPage;
@property (copy, nonatomic) NSString *eventType;

+ (id)shared;

- (void)p_addListener;
- (void)p_refreshSettings;
- (void)p_blurV2;
- (void)p_enterForeGround;
- (void)p_clearDimView;
- (BOOL)p_shouldBlur;
- (id)generateBlurView;
- (void)p_bindDimView:(id)a0;
- (void)p_track;
- (id)generateContainerView;
- (void)p_monitorFail;
- (void)bindViewControllerToModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
