@class NSString;

@interface WAEnableCopyPathMenuInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int recvTime;
@property (nonatomic) unsigned int expireSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_recvTime;
+ (void)PBArrayAdd_expireSeconds;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
