@class NSString;

@interface WCPayGPSvrConfigCache : NSObject <PBCoding>

@property (nonatomic) unsigned int aaMaxTotalNum;
@property (nonatomic) unsigned long long aaMaxTotalAmount;
@property (nonatomic) unsigned long long aaMaxPerAmount;
@property (nonatomic) unsigned int aaMaxPayerNum;
@property (nonatomic) unsigned int aaMaxReceiverNum;
@property (nonatomic) unsigned int aaDefaultMod;
@property (nonatomic) BOOL showSolitaireEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_aaMaxTotalNum;
+ (void)PBArrayAdd_aaMaxTotalAmount;
+ (void)PBArrayAdd_aaMaxPerAmount;
+ (void)PBArrayAdd_aaMaxPayerNum;
+ (void)PBArrayAdd_aaMaxReceiverNum;
+ (void)PBArrayAdd_aaDefaultMod;
+ (void)PBArrayAdd_showSolitaireEntry;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
