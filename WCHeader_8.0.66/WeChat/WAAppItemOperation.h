@class NSString;

@interface WAAppItemOperation : MMObject <PBCoding>

@property (copy, nonatomic) NSString *usrname;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int isFromBackground;
@property (nonatomic) unsigned int recordType;
@property (nonatomic) unsigned int reason;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *appMd5Str;
@property (nonatomic) BOOL excuteSync;
@property (nonatomic) BOOL isOperating;
@property (nonatomic) unsigned int commuseFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_usrname;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_isFromBackground;
+ (void)PBArrayAdd_recordType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
