@class HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveScreenRecordTracker : NSObject <IESLiveScreenRecordTrackerProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long pushToType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)trackScreenRecordStartWithSource:(id)a0;
- (void)trackScreenRecordCancel:(BOOL)a0;
- (void)trackScreenRecordFinishSucceed:(BOOL)a0 duration:(long long)a1 errorType:(long long)a2 extra:(id)a3;
- (void)trackScreenRecordDiscard;
- (void)trackBackRecordBtnClick;
- (void)trackBackRecordFinishSucceed:(BOOL)a0 duration:(unsigned long long)a1 errorType:(long long)a2 extra:(id)a3;
- (void)trackBackRecordRetryCanStart:(BOOL)a0 shouldRequest:(BOOL)a1 extra:(id)a2;
- (void)trackBackRecordDiscard;
- (void)trackSaveDraftClickWithRecordType:(long long)a0;
- (void)trackSaveDraftResultSuccess:(BOOL)a0 errorType:(long long)a1 extra:(id)a2;
- (void)trackShareToFansGroupClickWithRecordType:(long long)a0;
- (void)trackShareToFansGroupResultSuccess:(BOOL)a0 errorType:(long long)a1 extra:(id)a2;
- (void)trackDownloadClickWithRecordType:(long long)a0;
- (void)trackDownloadResultSuccess:(BOOL)a0 errorType:(long long)a1 extra:(id)a2;
- (void)trackPublishClickWithRecordType:(long long)a0;
- (void)trackPublishResultSuccess:(BOOL)a0 errorType:(long long)a1 extra:(id)a2;
- (BOOL)isDouyinAdmin;
- (void)FullLinkTrackEventWithName:(id)a0 step:(id)a1 params:(id)a2;
- (id)isAnchorForTracker;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (BOOL)isAdmin;

@end
