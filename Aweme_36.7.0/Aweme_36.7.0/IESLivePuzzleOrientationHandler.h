@class NSString, UIViewController;
@protocol IESHYControllerProtocol;

@interface IESLivePuzzleOrientationHandler : NSObject <HTSLiveOrientationActions, IESLivePlaybackOrientationActions>

@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *vc;
@property (nonatomic) BOOL forbidDismissForOrientationChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
