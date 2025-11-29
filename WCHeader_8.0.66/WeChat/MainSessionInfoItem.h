@class NSString, MMSessionInfo;

@interface MainSessionInfoItem : NSObject <PBCoding>

@property (retain, nonatomic) MMSessionInfo *mainSession;
@property (nonatomic) unsigned int mainUnReadCount;
@property (nonatomic) BOOL showAsRedDot;
@property (nonatomic) unsigned int mainMuteUnReadCount;
@property (nonatomic) unsigned int mainAtMeCount;
@property (nonatomic) unsigned int mainAtAllCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mainSession;
+ (void)PBArrayAdd_mainUnReadCount;
+ (void)PBArrayAdd_showAsRedDot;
+ (void)PBArrayAdd_mainMuteUnReadCount;
+ (void)PBArrayAdd_mainAtMeCount;
+ (void)PBArrayAdd_mainAtAllCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
