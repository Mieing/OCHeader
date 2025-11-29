@class NSString, BDPUniqueID, BDPAppPageURL;

@interface BDPClientAIShieldPageCacheModel : NSObject

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAppPageURL *pageUrl;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) double invalidTime;

- (id)initWithUniqueID:(id)a0 pageUrl:(id)a1 reason:(id)a2;
- (void).cxx_destruct;

@end
