@class WCFinderJumpInfo;

@interface WCFinderJumpInfoNextObjectHelper : NSObject

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;

+ (BOOL)shouldShowNextObjectButtonWithJumpInfo:(id)a0;
+ (id)viewControllerWithJumpInfo:(id)a0 tid:(id)a1 finderUserName:(id)a2;
+ (id)_videoCollectionViewControllerWithJumpInfo:(id)a0 tid:(id)a1 finderUserName:(id)a2;
+ (id)_nativeDramaViewControllerWithJumpInfo:(id)a0;

- (void).cxx_destruct;

@end
