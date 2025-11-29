@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HLReport : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dealQueue;
@property (nonatomic) BOOL reporting;
@property (nonatomic) BOOL waiting;
@property (nonatomic) struct sqlite3 { } *db;
@property long long totolCount;
@property (nonatomic) long long fcount;
@property (retain, nonatomic) NSDate *lastDate;

+ (id)shareInstance;
+ (id)vendorID;
+ (id)displayName;

- (id)init;
- (void)asyncTouchReport;
- (void)asyncDoReport:(id)a0 orType:(long long)a1;
- (void)asyncDeleteAllRecords;
- (void)touchReportForce:(BOOL)a0;
- (long long)updateCount;
- (void).cxx_destruct;

@end
