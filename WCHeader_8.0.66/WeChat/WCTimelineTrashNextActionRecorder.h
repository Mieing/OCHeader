@class NSString, NSMutableDictionary;

@interface WCTimelineTrashNextActionRecorder : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_records;
+ (void)initialize;
+ (void)recordNextLocalId:(id)a0 previousReportData:(id)a1;
+ (void)tryReportNextLocalId:(id)a0 nextPublishId:(id)a1;
+ (void)clearAll;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
