@class NSString, RingToneDetail;

@interface RingTone : MMObject <NSCoding, PBCoding, NSCopying>

@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned int musicSid;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) RingToneDetail *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_musicSid;
+ (void)PBArrayAdd_type;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithRingbackSetting:(id)a0;
- (id)initFromPB:(id)a0;
- (id)genPB;
- (id)genSimplePB;
- (id)initFromWCSetting:(id)a0;
- (id)initWithFinderDataItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isCropTimeValid;
- (BOOL)isGlobalRing;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
