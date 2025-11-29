@class NSString, LocationRetriever;
@protocol CameraScanGoodsRemoteDetectorDelegate;

@interface CameraScanGoodsRemoteDetector : MMObject <IScanGoodsServiceExt>

@property (nonatomic) unsigned long long sessionId;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (weak, nonatomic) id<CameraScanGoodsRemoteDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetectorWorkQueue:(id)a0 sessionId:(unsigned long long)a1;
- (BOOL)scanOnePicture:(id)a0;
- (void)onSendImageInfoSuccess:(id)a0;
- (void)onSendImageInfoFail:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 isNetworkError:(BOOL)a3;
- (void)handleSendImageInfoSuccessForAlbum:(id)a0;
- (void).cxx_destruct;

@end
