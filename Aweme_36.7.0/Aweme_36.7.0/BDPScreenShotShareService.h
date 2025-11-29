@class BDPScreenShotPopover, NSString, NSTimer, UIImage, BDPUniqueID;

@interface BDPScreenShotShareService : NSObject <BDPAppRouteChangeMessage, BDPScreenShotShareService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPScreenShotPopover *popover;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) long long pageID;
@property (nonatomic) long long settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImage *screenShootImage;
@property (retain, nonatomic) UIImage *screenShootTailorImage;
@property (retain, nonatomic) NSString *shareId;
@property (nonatomic) BOOL isShowPopover;

+ (void)bootstrapLaunch;

- (id)initService;
- (id)screenShotImage;
- (void)p_rotated:(id)a0;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (id)frontUniqueID;
- (void)screenShootWithPopover;
- (void)updateShareId;
- (void)startServiceIfNeed;
- (unsigned long long)popoverActionWithConfig:(id)a0;
- (id)cutScreenShot:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startAutoHideIfNeed;
- (id)screenShotData;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
