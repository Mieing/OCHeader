@class NSString, UIView;

@interface BDPToolbarLevelControl : NSObject <BDPXScreenSizeChangeMessage, BDPAppRouteChangeMessage>

@property (weak, nonatomic) UIView *popupView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isParentVCChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldAddOnPopupView;

- (void)XScreenWindowSizeModeChangeWithController:(id)a0 mode:(unsigned long long)a1 animated:(BOOL)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (id)initWithPopupView:(id)a0 dismissBlock:(id /* block */)a1;
- (void)stopWork;
- (void)addPopupView:(id)a0;
- (void)removePopupView;
- (void)moveToolbarWithTempTop:(BOOL)a0;
- (void)reLayoutPopupView:(id)a0;
- (void).cxx_destruct;
- (void)startWork;
- (void)dealloc;

@end
