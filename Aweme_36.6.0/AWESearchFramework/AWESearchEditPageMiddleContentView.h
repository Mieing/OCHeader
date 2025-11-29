@class UIView, NSString, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, AWESearchEditPageTrackManager, BDXBridgeEventSubscriber;
@protocol AnnieXContainerBaseProtocol;

@interface AWESearchEditPageMiddleContentView : UIView <BDXKitViewLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *snapshotView;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *contentView;
@property (copy, nonatomic) NSString *defaultCoverImageUrl;
@property (copy, nonatomic) NSDictionary *snapshotParams;
@property (nonatomic) BOOL defaultCoverTaken;
@property (nonatomic) BOOL snapshotCalled;
@property (retain, nonatomic) NSMutableDictionary *eventCallBacks;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL requestCoverImageFailed;
@property (retain, nonatomic) NSMutableArray *snapshotCommonData;
@property (retain, nonatomic) NSMutableSet *uploadImageFailSet;
@property (nonatomic) long long uploadImageFailCount;
@property (nonatomic) double startLoadingTimeStamp;
@property (copy, nonatomic) id /* block */ didFinishLoadWebViewBlock;
@property (weak, nonatomic) AWESearchEditPageTrackManager *trackManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchAIGCPostLongImageTextConfig;
+ (long long)searchAIGCLongImageTextCaptureScreenType;
+ (double)searchAIGCLongImageTextCaptureScreenChangeFrameDelayTime;

- (void)viewDidStartLoading:(id)a0;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (id)annieXViewWithURL:(id)a0;
- (void)takeSnapshotIfReady;
- (void)registerEventName:(id)a0 forView:(id)a1 ofCallBack:(id /* block */)a2;
- (void)firstScreenSnapShot;
- (void)takeSnapshotByChangeFrameAtSegments:(id)a0;
- (void)takeSnapshotByScrollAtSegments:(id)a0 atIndex:(long long)a1 failCount:(long long)a2;
- (void)uploadSnapshotWithImage:(id)a0 segID:(id)a1 segmentsCount:(long long)a2;
- (void)uploadSnapshotWithImage:(id)a0;
- (void)setupAnnieXViewWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
