@class NSString;

@interface ShakeMsgItem : MMObject <PBCoding>

@property (nonatomic) unsigned long long ui64SvrMsgId;
@property (nonatomic) unsigned int uiType;
@property (nonatomic) BOOL bIsRead;
@property (nonatomic) unsigned int uiCreateTime;
@property (retain, nonatomic) NSString *nsThumbUrl;
@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) NSString *nsDesc;
@property (retain, nonatomic) NSString *nsJumpLink;
@property (retain, nonatomic) NSString *nsPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ui64SvrMsgId;
+ (void)PBArrayAdd_uiType;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_bIsRead;
+ (void)PBArrayAdd_nsThumbUrl;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsJumpLink;
+ (void)PBArrayAdd_nsPid;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
