@class NSString;

@interface WCRedEnvelopesInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) BOOL hasReward;
@property (nonatomic) BOOL bFree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_hasReward;
+ (void)PBArrayAdd_bFree;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
