@class NSArray, NSString, NSData;

@interface MMFinderLiveRewardFreeGiftParams : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSArray *freeGiftIdArray;
@property (copy, nonatomic) NSString *rewardProductId;
@property (copy, nonatomic) NSString *rewardRequestId;
@property (retain, nonatomic) NSData *liveCookies;

- (void).cxx_destruct;

@end
