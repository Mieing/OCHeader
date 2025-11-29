@class NSNumber, IESLiveAPISpecialParamsService;
@protocol IESLiveKTVFullLinkMonitor, IESLiveMonitor;

@interface IESLiveKTVMultiChorusAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> fullMonitor;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) IESLiveAPISpecialParamsService *specialParamsService;

- (void)fetchWantToSingSongListWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)permitPrepareApplyMultiChorusWithToUserID:(id)a0 completion:(id /* block */)a1;
- (void)handlerResponse:(id)a0 error:(id)a1 startTime:(double)a2 event:(id)a3 completion:(id /* block */)a4;
- (id)initWithRoomID:(id)a0 trackContext:(id)a1;
- (void)joinMultiChorusWithMusicID:(id)a0 orderUserID:(id)a1 songType:(int)a2 completion:(id /* block */)a3;
- (void)leaveMultiChorusWithMusicID:(id)a0 orderUserID:(id)a1 songType:(int)a2 completion:(id /* block */)a3;
- (void)fetchMultiChorusWaitingListWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)cancelMultiChorusPrepareApplyWithCompletion:(id /* block */)a0;
- (void)prepareApplyMultiChorusWithMuteState:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)post:(id)a0;
- (id)get:(id)a0;

@end
