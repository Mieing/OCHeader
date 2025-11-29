@class NSMutableDictionary, NSString, NSIndexPath, AWELandscapeRecallVideoView;
@protocol AWEFeedSafetyCheckProtocol;

@interface AWELandscapeFeedRecallVideoController : AWELandscapeFeedBaseController <AWELandscapeFeedRecallVideoControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *recallVideosDict;
@property (retain, nonatomic) AWELandscapeRecallVideoView *recallVideoView;
@property (nonatomic) BOOL isReCallVideos;
@property (retain, nonatomic) NSIndexPath *recalledAfterPlayIndex;
@property (retain, nonatomic) id<AWEFeedSafetyCheckProtocol> safetyCheckHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)curSceneString;
- (void)handleVideoPrivacyCheckNotification:(id)a0;
- (void)setupRegisters;
- (void)handleVideoSafetyCheckNotification:(id)a0;
- (void)handleSafetyPreCheckNotification:(id)a0;
- (void)showRecallVideoView:(BOOL)a0;
- (void)removeReCallVideos:(id)a0;
- (void)removeBackVideos:(id)a0;
- (void)hideRecallVideoView:(BOOL)a0;
- (void)recallWithItemID:(id)a0;
- (void)removeDrawBackVideoList:(id)a0 type:(id)a1 enterFrom:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
