@class NSNumber, NSString, LotteryInfo;

@interface IESLiveLGameSmallWindowBottomManagerConfig : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (retain, nonatomic) LotteryInfo *gameLottery;

- (void).cxx_destruct;

@end
