@class NSString;

@interface BDPUniqueID : NSObject <NSCopying>

@property (copy) NSString *appID;
@property (copy) NSString *fullString;
@property (copy) NSString *versionType;
@property (nonatomic) BOOL useMixRuntime;
@property (copy, nonatomic) NSString *lynxGroupName;

- (id)initWithAppID:(id)a0;
- (id)initWithAppID:(id)a0 versionType:(id)a1;
- (BOOL)isBackgroundAudioWorking;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
