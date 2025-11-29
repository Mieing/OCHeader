@class NSString, NSDictionary, AWEAwemeModel, UIImage, UILongPressGestureRecognizer;
@protocol AWEAwemeBizPlayVideoProtocol, AFDRichContentContainerViewControllerProtocol, AWEAwemePlayVideoTrackProtocol, IESVideoPlayerProtocol;

@interface AFDPureModeLongPressPanelContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> currentPlayerController;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> currentVideoController;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContainer;
@property (retain, nonatomic) UIImage *albumCurrentImage;
@property (nonatomic) unsigned long long albumCurrentIndex;
@property (retain, nonatomic) UIImage *longPressFrameImage;
@property (nonatomic) double longPressFrameTime;
@property (retain, nonatomic) UIImage *longPressKeyInfoImage;
@property (copy, nonatomic) NSString *longPressKeyInfoDesc;
@property (nonatomic) BOOL disableVideotoText;
@property (copy, nonatomic) id /* block */ panelDismissBlock;

- (void).cxx_destruct;

@end
