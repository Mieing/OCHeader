@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizBaseCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onDataChangeBizMsgInfo:(id)a0 completion:(id /* block */)a1;
- (void)onNotifyChangeNotifyInfo:(id)a0 completion:(id /* block */)a1;
- (void)onMoveToTopWithCompletion:(id /* block */)a0;
- (void)onBizFinderLiveInfoUpdateScene:(long long)a0 info:(id)a1 completion:(id /* block */)a2;
- (void)onFinderLiveStatusChangeLiveId:(id)a0 completion:(id /* block */)a1;
- (void)onBizPageScreenShotWithCompletion:(id /* block */)a0;
- (void)onInsertMockCanvasModelIndex:(long long)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)deleteRecCardCardId:(id)a0 completion:(id /* block */)a1;
- (void)onNativeBizCreationInfoChangedInfo:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
