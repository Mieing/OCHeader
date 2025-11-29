@interface BDPAppFullscreenManager_HG : NSObject

@property (nonatomic) BOOL isFullscreen;
@property (weak, nonatomic) id fullscreenElement;

+ (id)sharedManager;

- (BOOL)canEnterFullscreenWithPageID:(long long)a0 element:(id)a1 orientation:(long long)a2 uniqueID:(id)a3;
- (BOOL)canExitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (BOOL)tryExitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (BOOL)tryEnterFullscreenWithPageID:(long long)a0 orientation:(long long)a1 element:(id)a2 uniqueID:(id)a3;
- (void).cxx_destruct;

@end
