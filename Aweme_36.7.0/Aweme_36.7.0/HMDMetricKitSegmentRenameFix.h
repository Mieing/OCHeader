@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMetricKitSegmentRenameFix : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSString *expandDir;
@property (retain, nonatomic) NSString *appImagesTextSegmentInfoFilePath;
@property (retain, nonatomic) NSString *preSegmentDir;
@property (retain, nonatomic) NSString *currentPreSegmentFilePath;
@property (retain, nonatomic) NSDictionary *historyAppImageTextSegmentMap;
@property (copy, nonatomic) id /* block */ callback;

+ (id)shared;

- (void)checkAndRemoveOldPreSegmentFile;
- (BOOL)createDirWithPath:(id)a0;
- (id)getCurrentAppVersionMainOffset;
- (id)historyAppImageTextSegmentInfos;
- (id)fetchCurrentAppImagesTextSegmentRange;
- (struct hmd_segments_fix_info_table { int x0; struct hmd_segment_fix_info { char x0[100]; char x1[40]; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x1[50]; } *)initMapSegmentsTableOnce;
- (id)historyPreAppImageTextSegmentInfos;
- (void)asyncPreRecordAppImagesTextSegmentInfo:(id)a0;
- (void)preRecordAppImagesTextSegmentInfo:(id)a0;
- (BOOL)createExpendDir;
- (id)fetchRecentAppVersionMainOffset;
- (void)asyncRecordRecordAppImagesTextSegmentInfo;
- (BOOL)removeExpendDir;
- (void)resetAppImagesTextSegmentRangeFile;
- (id)historyPreAppImageTextSegmentMap;
- (id)fetchCurrentImageNameUUIDMap;
- (void).cxx_destruct;
- (id)init;

@end
