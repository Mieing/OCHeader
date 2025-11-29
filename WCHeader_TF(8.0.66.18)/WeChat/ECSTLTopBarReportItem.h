@class NSString;

@interface ECSTLTopBarReportItem : MMObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL hasDotNotice;
@property (copy, nonatomic) NSString *bizUsrName;
@property (copy, nonatomic) NSString *logoUrl;
@property (copy, nonatomic) NSString *syncBuffer;
@property (nonatomic) BOOL isLogoCache;
@property (nonatomic) unsigned int eventTime;
@property (nonatomic) unsigned long long eventTimeMs;
@property (nonatomic) unsigned int exposeCount;
@property (nonatomic) unsigned int clickCount;
@property (nonatomic) unsigned int exposeReqId;
@property (nonatomic) BOOL isDefaultLogo;
@property (nonatomic) unsigned int barType;
@property (nonatomic) unsigned int liveState;
@property (copy, nonatomic) NSString *liveExportId;
@property (nonatomic) BOOL isBrandLiving;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned int barExpandType;
@property (nonatomic) unsigned int exposedType;
@property (nonatomic) unsigned long long newMsgType;
@property (nonatomic) unsigned int memberZoneStatus;
@property (nonatomic) unsigned long long finderUin;
@property (retain, nonatomic) NSString *finderUsername;

+ (id)itemIdWithBrandItemModel:(id)a0;
+ (id)reportItemWithBrandItemModel:(id)a0 index:(unsigned long long)a1;
+ (id)reportItemWithChannelItemModel:(id)a0 index:(unsigned long long)a1;
+ (id)reportItemWithBTLiveBarItemViewModel:(id)a0 index:(unsigned long long)a1;

- (BOOL)isSameAsItem:(id)a0;
- (id)oftenReadBarShowInfo;
- (id)oftenReadBarClickInfo;
- (void).cxx_destruct;

@end
