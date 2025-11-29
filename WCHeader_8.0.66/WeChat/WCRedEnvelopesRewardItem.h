@class NSString;

@interface WCRedEnvelopesRewardItem : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long receiveAmount;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *ticket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_receiveAmount;
+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_ticket;
+ (void)initialize;
+ (id)fromServerObj:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isFreeItem;
- (void).cxx_destruct;

@end
