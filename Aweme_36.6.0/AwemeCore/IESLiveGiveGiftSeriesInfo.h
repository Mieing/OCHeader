@class NSString, NSArray, NSNumber;

@interface IESLiveGiveGiftSeriesInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *giftList;
@property (retain, nonatomic) NSArray *seriesGiftMapList;
@property (retain, nonatomic) NSNumber *totalDiamondCount;

- (void).cxx_destruct;

@end
