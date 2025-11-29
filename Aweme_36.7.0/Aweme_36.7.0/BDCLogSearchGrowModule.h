@class BDChainLogModule;

@interface BDCLogSearchGrowModule : NSObject

@property (readonly, nonatomic) BDChainLogModule *entry;
@property (readonly, nonatomic) BDChainLogModule *middlePage;
@property (readonly, nonatomic) BDChainLogModule *sugPage;
@property (readonly, nonatomic) BDChainLogModule *resultPage;

@end
