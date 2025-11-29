@class NSString;

@interface AWEAdFormPopupOpener : NSObject <AWEBDARifleViewDelegate, AWEBDARifleViewPopupEventProtocol>

@property (nonatomic) BOOL popupShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)popupShowing;
+ (void)openAdFormPopupWithAweme:(id)a0 tag:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)rifleView:(id)a0 closeWithParams:(id)a1;
- (void)openAdFormPopupWithAweme:(id)a0 tag:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
