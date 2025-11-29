@class NSString, NSMutableDictionary, MMMapView, UIView, NSMutableArray, MMTimer;

@interface LocationThumbMgr : MMUserService <QMapViewDelegate, IMsgExt, MMServiceProtocol> {
    MMMapView *_mapView;
    UIView *_mapPinView;
    NSMutableDictionary *_taskDic;
    NSMutableArray *_taskQueue;
    MMTimer *_taskTimer;
    BOOL _isUpdating;
    BOOL _hasReportLocateError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getThumbPathWithChatname:(id)a0 MsgLocalID:(unsigned int)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (void)cleanResource;
- (id)getLocationThumb:(id)a0 MsgLocalID:(unsigned int)a1;
- (int)updateLocationThumb:(id)a0;
- (int)deleteLocationThumb:(id)a0 MsgLocalID:(unsigned int)a1;
- (int)startUpdate;
- (int)stopUpdate;
- (void)onTimeout;
- (void)notifyTimeout;
- (void)startNextTask;
- (void)addThumbTask:(id)a0;
- (void)deleteThumbTask:(id)a0;
- (void)asyncGenThumbImage;
- (void)onTaskFailedWithError:(int)a0;
- (void)initMapView;
- (void)loadMapView:(id)a0;
- (void)configMapView:(id)a0;
- (void)saveThumbImage:(id)a0 Chatname:(id)a1 MsgLocalID:(unsigned int)a2;
- (void)deleteThumbImageWithChatname:(id)a0 MsgLocalID:(unsigned int)a1;
- (void)mapViewDidFailLoadingMap:(id)a0 withError:(id)a1;
- (void)mapView:(id)a0 didFailToLocateUserWithError:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void).cxx_destruct;

@end
