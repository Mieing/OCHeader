@class NSString, FinderLiveLotteryMethodItem, MMFinderLiveTaskId;

@interface MMFinderLiveLotteryMethodInfo : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *methodItem;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int methodId;
@property (nonatomic) unsigned int opType;

- (id)initWithLiveTaskId:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
