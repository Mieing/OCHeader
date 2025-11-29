@class NSString;

@interface MMFinderLiveMilestoneLotteryInfo : NSObject

@property (retain, nonatomic) NSString *prizeWording;
@property (retain, nonatomic) NSString *attendWording;
@property (nonatomic) unsigned int beginTime;
@property (retain, nonatomic) NSString *lotteryId;

- (id)initWithLotteryInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
