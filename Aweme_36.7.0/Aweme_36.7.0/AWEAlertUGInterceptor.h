@class NSArray, MMKV, NSMutableDictionary, NSString;

@interface AWEAlertUGInterceptor : NSObject <AWEUGEventListenerDelegate, AWEAlertInterceptorDelegate>

@property (copy, nonatomic) NSArray *eventList;
@property (nonatomic) long long recommendFeedVideoPlayCount;
@property (nonatomic) long long totalVideoPlayCount;
@property (nonatomic) double coldStartTime;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL recordUpdated;
@property (retain, nonatomic) NSMutableDictionary *alertReportTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *alertSessionIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)reportEvent:(id)a0 params:(id)a1;
- (id)interceptorActionBeforeTrackWithContext:(id)a0;
- (void)subscribeToEventReport;
- (void)updateTodayColdLaunchTimesIfNeeded;
- (id)getTodayColdStartTimesRecord;
- (id)getLastColdStartDaysRecord;
- (void)setTodayColdStartTimesRecord:(id)a0;
- (void)setLastColdStartDaysRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
