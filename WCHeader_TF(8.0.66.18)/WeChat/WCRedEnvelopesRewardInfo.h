@class NSString, NSMutableArray;

@interface WCRedEnvelopesRewardInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) unsigned int resoureId;
@property (nonatomic) unsigned int reportId;
@property (nonatomic) unsigned int reportKey;
@property (retain, nonatomic) NSMutableArray *arrRewardItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_resoureId;
+ (void)PBArrayAdd_arrRewardItem;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_reportKey;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasRewardForMe;
- (void).cxx_destruct;

@end
