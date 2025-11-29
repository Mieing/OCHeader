@class NSString, _TtC6WeChat28MMDiskBizStatDayAggregations;

@interface MMDiskBizFileStat : NSObject <PBCoding>

@property (nonatomic) unsigned int m_fileNum;
@property (nonatomic) unsigned long long m_fileSize;
@property (nonatomic) unsigned int m_delFileNum;
@property (nonatomic) unsigned long long m_delFileSize;
@property (retain, nonatomic) _TtC6WeChat28MMDiskBizStatDayAggregations *aggregationsByDayInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_fileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)PBArrayAdd_m_delFileNum;
+ (void)PBArrayAdd_m_delFileSize;
+ (void)PBArrayAdd_aggregationsByDayInterval;
+ (void)initialize;
+ (id)getFileStatFormDic:(id)a0 withType:(long long)a1;
+ (void)sumFileSize:(unsigned long long)a0 fileInterval:(long long)a1 withType:(long long)a2 dicStat:(id)a3;
+ (void)sumDelFileNum:(unsigned int)a0 DelFileSize:(unsigned long long)a1 withType:(long long)a2 dicStat:(id)a3;
+ (void)sumDicFilStat:(id)a0 toDic:(id)a1;

- (id)getPBPropertyTable;
- (id)init;
- (void)sumFileStat:(id)a0;
- (void).cxx_destruct;

@end
