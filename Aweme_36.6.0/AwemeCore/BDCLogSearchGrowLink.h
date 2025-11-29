@class BDChainLogLink;

@interface BDCLogSearchGrowLink : NSObject

@property (readonly, nonatomic) BDChainLogLink *entry;
@property (readonly, nonatomic) BDChainLogLink *middlePage;
@property (readonly, nonatomic) BDChainLogLink *sugPage;
@property (readonly, nonatomic) BDChainLogLink *resultPage;

@end
