@class NSString;

@interface AWEPlayletTabMidInsertManager : NSObject <AWEPlayletTabMidInsertManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (double)firstEnterTabTodayTimeInterval;
- (void)updateFirstEnterInnerTodayTimeInterval;
- (void)updateFirstEnterTabTodayTimeInterval;
- (void)updateFirstEnterTodayTimeWithRecordKey:(id)a0;
- (double)firstEnterTodayTimeWithRecordKey:(id)a0;
- (BOOL)enableUpdateTime:(id)a0 recordTimeInterval:(double)a1;
- (double)firstEnterInnerTodayTimeInterval;

@end
