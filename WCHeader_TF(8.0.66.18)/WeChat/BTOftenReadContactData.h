@class NSString;

@interface BTOftenReadContactData : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) BOOL hasNewMsg;
@property (nonatomic) unsigned long long lastMsgSvrId;
@property (nonatomic) unsigned int lastMsgTime;
@property (nonatomic) unsigned int weight;
@property (copy, nonatomic) NSString *finderFeedExportId;
@property (nonatomic) BOOL hasNewLive;
@property (nonatomic) unsigned long long newMsgType;
@property (nonatomic) unsigned long long lastFinderGreenDotTimeStamp;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *finderNickName;
@property (retain, nonatomic) NSString *finderLogoUrl;
@property (nonatomic) unsigned long long finderUin;
@property (nonatomic) unsigned long long finderLastUpdateTime;
@property (copy, nonatomic) NSString *finderExportId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_hasNewMsg;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_weight;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_hasNewLive;
+ (void)PBArrayAdd_newMsgType;
+ (void)PBArrayAdd_lastFinderGreenDotTimeStamp;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_finderNickName;
+ (void)PBArrayAdd_finderLogoUrl;
+ (void)PBArrayAdd_finderUin;
+ (void)PBArrayAdd_finderLastUpdateTime;
+ (void)PBArrayAdd_finderExportId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isLiving;
- (BOOL)isFinder;
- (BOOL)isMember;
- (id)getNeededExportId;
- (void).cxx_destruct;

@end
