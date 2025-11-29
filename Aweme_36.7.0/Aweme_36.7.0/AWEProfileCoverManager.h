@interface AWEProfileCoverManager : NSObject

@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) id /* block */ uploadImageCompleteBlock;
@property (nonatomic) BOOL isCounted;
@property (nonatomic) BOOL alreadySet;
@property (nonatomic) BOOL isTopVideoFullScreen;

+ (id)sharedInstance;

- (void)alreadySetCover;
- (void)uploadCoverWithImage:(id)a0;
- (void)userLogout;
- (BOOL)hideProfileCoverTip;
- (void)selectCoverWithSelectedBlock:(id /* block */)a0 uploadImageCompleteBlock:(id /* block */)a1 trackParams:(id)a2;
- (id)drawTransparentImage;
- (void)uploadCoverWithImage:(id)a0 trackParams:(id)a1;
- (BOOL)showProfileCoverTip;
- (void)profileCoverTipCounted;
- (void)selectCoverWithSelectedBlock:(id /* block */)a0 trackParams:(id)a1;
- (void).cxx_destruct;

@end
