@class NSError, NSString, NSDate;

@interface AWEPadFeedChannelDataMonitor : NSObject <AWEPadFeedChannelDataMonitor>

@property (retain, nonatomic) NSDate *requestBeginTime;
@property (retain, nonatomic) NSDate *requestEndTime;
@property (retain, nonatomic) NSDate *buildEndTime;
@property (retain, nonatomic) NSDate *showEndTime;
@property (retain, nonatomic) NSError *requestError;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRequestInfoWithError:(id)a0 logID:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
