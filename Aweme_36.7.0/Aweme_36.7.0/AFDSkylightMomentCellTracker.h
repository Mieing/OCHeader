@class NSString, NSMutableSet;

@interface AFDSkylightMomentCellTracker : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableSet *trackDataSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)clearTrackData;
- (void)trackOnlineBoardIconClick;
- (void)trackOnlineBoardIconShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
