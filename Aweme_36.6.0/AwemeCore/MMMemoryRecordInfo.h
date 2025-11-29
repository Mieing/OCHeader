@class NSString;

@interface MMMemoryRecordInfo : MMMatrixBaseModel

@property (nonatomic) unsigned long long launchTime;
@property (retain, nonatomic) NSString *userScene;
@property (retain, nonatomic) NSString *systemVersion;
@property (nonatomic) BOOL sampling_enable;
@property (nonatomic) unsigned int sampling_strategy;
@property (nonatomic) unsigned int sampling_memory_size;
@property (nonatomic) unsigned int sampling_rate;
@property (nonatomic) BOOL thread_name_enable;
@property (nonatomic) BOOL cpu_upload_enable;
@property (nonatomic) BOOL refine_dump_enable;
@property (nonatomic) int refine_dump_type;

- (id)recordDataPath;
- (id)generateReportDataWithCustomInfo:(id)a0 withKeyClassPrefix:(id)a1 withKeyClassSuffix:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)recordID;

@end
