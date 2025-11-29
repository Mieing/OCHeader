@class NSString;

@interface BDPAppFullscreenService : NSObject <BDPAppFullscreenService>

@property (nonatomic) BOOL isFullscreen;
@property (weak, nonatomic) id fullscreenElement;
@property (nonatomic) long long fullScreenOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (BOOL)canEnterFullscreenWithPageID:(long long)a0 element:(id)a1 orientation:(long long)a2 uniqueID:(id)a3;
- (BOOL)canExitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (BOOL)tryEnterFullscreenWithPageID:(long long)a0 element:(id)a1 orientation:(long long)a2 uniqueID:(id)a3;
- (BOOL)tryExitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (id)currentFullscreenElement;
- (void)updateElementWhenKeepFullScreen:(id)a0;
- (void)forceExitFullscreenWithPageID:(long long)a0 uniqueID:(id)a1;
- (void).cxx_destruct;

@end
