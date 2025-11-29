@class NSString, NSDictionary, IESECPDPVideoPlayerBizTracker, UIView, IESECHeadVideoModel;
@protocol IESECPDPVideoPlayerViewProtocol;

@interface IESECPDPVideoPlayerBizContext : NSObject

@property (weak, nonatomic) UIView<IESECPDPVideoPlayerViewProtocol> *player;
@property (retain, nonatomic) IESECPDPVideoPlayerBizTracker *playerTracker;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (copy, nonatomic) NSString *currentPlayScene;
@property (copy, nonatomic) id /* block */ doTrackBlock;
@property (retain, nonatomic) IESECHeadVideoModel *videoModel;

- (void)updateVideoTrackerParams:(id)a0;
- (id)getVideoPlayerTrackVideoTypeWithWindow;
- (void)videoPlayerWillReturnHeader;
- (BOOL)didVideoPlayerSupportFloat;
- (id)getVideoID;
- (id)calculateVideoSizeString;
- (id)getVideoPlayerTrackVideoType;
- (void)videoPlayerDidEnterPreview;
- (id)getVideoTrackerParams;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;

@end
