@protocol MMLiveCompleteViewControllerDelegate;

@interface MMLiveCompleteViewController : MMCPUIViewController

@property (nonatomic) BOOL needAutoRotateToPortrait;
@property (nonatomic) long long currDeviceOrientation;
@property (nonatomic) BOOL isEmbededInLiveFeed;
@property (weak, nonatomic) id<MMLiveCompleteViewControllerDelegate> delegate;

- (void).cxx_destruct;

@end
