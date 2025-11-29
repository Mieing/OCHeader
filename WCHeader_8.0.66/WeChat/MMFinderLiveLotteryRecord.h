@class NSArray, NSString, WCFinderContact;

@interface MMFinderLiveLotteryRecord : NSObject

@property (nonatomic) unsigned int liveStartTime;
@property (retain, nonatomic) NSArray *lotteryList;
@property (retain, nonatomic) NSArray *milestoneLotteryList;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) int retCode;
@property (nonatomic) unsigned int supportMultiType;
@property (retain, nonatomic) WCFinderContact *anchorContact;

- (id)initWithLotteryRecord:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
