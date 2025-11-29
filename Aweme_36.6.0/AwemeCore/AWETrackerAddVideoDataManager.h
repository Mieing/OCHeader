@class NSDictionary, NSString;

@interface AWETrackerAddVideoDataManager : HTSService <AWETrackerAddVideoDataManagerProtocol>

@property (copy, nonatomic) NSDictionary *showtimeMap;
@property (copy, nonatomic) NSDictionary *playtimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)addVideoWatchingDataWithContext:(id)a0;
- (BOOL)recordAdVideShowTime:(id)a0;
- (id)currentAwemeModelWithContext:(id)a0;
- (void).cxx_destruct;
- (void)pause:(id)a0;

@end
