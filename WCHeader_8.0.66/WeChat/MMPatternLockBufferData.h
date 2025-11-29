@class NSData, NSString;

@interface MMPatternLockBufferData : NSObject <PBCoding>

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *svrPatternHash;
@property (nonatomic) unsigned int lockStatus;
@property (retain, nonatomic) NSData *sign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uin;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_svrPatternHash;
+ (void)PBArrayAdd_lockStatus;
+ (void)PBArrayAdd_sign;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
