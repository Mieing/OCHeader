@class QMapContext, QMapRepeatTimer, NSString, QMediator, NSMutableArray, QTrafficServerEngine;

@interface QTrafficManager : NSObject <QMapContextDelegate>

@property (nonatomic) double startZoomLevel;
@property (nonatomic) int protocolVersion;
@property (retain, nonatomic) QTrafficServerEngine *server;
@property (retain, nonatomic) QMapRepeatTimer *timer;
@property (retain, nonatomic) NSMutableArray *downloadingList;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QMapContext *mapContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)refresh;
- (void)setTrafficMode:(int)a0 fromZoomLevel:(double)a1;
- (id)addBlocks:(id)a0;
- (void)removeBlocks:(id)a0;
- (void)checkUpdate:(id)a0;
- (void)writeData:(id)a0;
- (void)invalidateTimer;
- (void)startAutoRefresh;
- (void)setTrafficStyle:(id)a0;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)a0;
- (void).cxx_destruct;

@end
