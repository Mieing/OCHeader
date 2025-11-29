@class NSString;

@interface KvReportItem30755 : KvReportBaseItem

@property (nonatomic) unsigned int scene_21;
@property (nonatomic) unsigned int sessionId_22;
@property (nonatomic) unsigned int flowListItemType_23;
@property (nonatomic) unsigned int itemPos_24;
@property (nonatomic) unsigned int actionType_25;
@property (nonatomic) unsigned long long stayTimeInMs_26;
@property (retain, nonatomic) NSString *bizUserName_27;
@property (retain, nonatomic) NSString *articleUrl_28;
@property (nonatomic) unsigned int bizUin_29;
@property (nonatomic) unsigned long long msgId_30;
@property (nonatomic) unsigned int itemIdx_31;
@property (nonatomic) unsigned int itemShowType_32;
@property (retain, nonatomic) NSString *finderFeedId_33;
@property (nonatomic) BOOL isRecommand_34;
@property (retain, nonatomic) NSString *recInfo_35;
@property (nonatomic) BOOL isSubscribed_36;
@property (nonatomic) unsigned long long actionTimeInMs_37;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
