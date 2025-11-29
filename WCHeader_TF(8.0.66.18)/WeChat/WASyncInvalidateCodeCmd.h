@class NSString;

@interface WASyncInvalidateCodeCmd : WASyncBaseCmd <PBCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_cmdType;
+ (void)PBArrayAdd_squence;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_receiveCmdTimeStamp;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
