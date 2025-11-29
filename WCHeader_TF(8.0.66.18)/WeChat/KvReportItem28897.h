@class NSString;

@interface KvReportItem28897 : KvReportBaseItem

@property (nonatomic) unsigned int scene_21;
@property (copy, nonatomic) NSString *netType_22;
@property (nonatomic) unsigned int produceAction_23;
@property (nonatomic) unsigned int consumeAction_24;
@property (nonatomic) long long firstScreenTime_25;
@property (nonatomic) long long receivePageDataTime_26;
@property (nonatomic) long long pageFinishTime_27;
@property (nonatomic) unsigned int preloadPicAction_28;
@property (nonatomic) long long preloadPicDownloadTime_29;
@property (nonatomic) long long preloadPicSize_30;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
