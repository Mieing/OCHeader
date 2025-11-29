@class NSString, GPBInt32ObjectDictionary;

@interface BDUGBsyncHeader : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL hasUid;
@property (copy, nonatomic) NSString *did;
@property (nonatomic) BOOL hasDid;
@property (nonatomic) long long ts;
@property (nonatomic) BOOL hasTs;
@property (nonatomic) int ctrl;
@property (nonatomic) BOOL hasCtrl;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL hasSdkVersion;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) GPBInt32ObjectDictionary *infos;
@property (readonly, nonatomic) unsigned long long infos_Count;

+ (id)descriptor;

- (int)ctrl;
- (id)uid;
- (id)did;
- (int)version;
- (int)reason;
- (void)setInfos:(id)a0;
- (void)setReason:(int)a0;
- (void)setCtrl:(int)a0;
- (void)setTs:(long long)a0;
- (void)setSdkVersion:(id)a0;
- (void)setUid:(id)a0;
- (void)setDid:(id)a0;
- (void)setVersion:(int)a0;

@end
