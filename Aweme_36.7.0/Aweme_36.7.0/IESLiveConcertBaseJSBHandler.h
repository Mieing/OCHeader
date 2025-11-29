@protocol IESLiveChorusConcertEventDelegate, IESLiveChorusLinkerService, IESLiveChorusConcertDataSource, IESLiveMultiUserScenarioMonitor, IESLiveRoomService;

@interface IESLiveConcertBaseJSBHandler : NSObject

@property (weak, nonatomic) id<IESLiveChorusLinkerService> linker;
@property (weak, nonatomic) id<IESLiveChorusConcertEventDelegate> eventDelegate;
@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveChorusConcertDataSource> dataSource;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)initWithEventDelegate:(id)a0 dataSource:(id)a1;
- (void)updateStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)getStatusWithType:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)callbackWithData:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)updateEventDelegate:(id)a0;
- (void).cxx_destruct;
- (id)bizId;

@end
