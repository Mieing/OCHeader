@class BDPUniqueID, BDPAppPageURL;

@interface BDPClientAIFetchStrategyRequestModel : NSObject

@property (nonatomic) long long strategy;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long fromType;
@property (retain, nonatomic) BDPAppPageURL *pageUrl;

- (id)initWithUniqueID:(id)a0 strategy:(long long)a1 from:(long long)a2;
- (void).cxx_destruct;

@end
