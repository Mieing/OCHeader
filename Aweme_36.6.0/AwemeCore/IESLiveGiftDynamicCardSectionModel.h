@class NSNumber, HTSLiveSeriesGiftsInfo;

@interface IESLiveGiftDynamicCardSectionModel : NSObject

@property (retain, nonatomic) NSNumber *giftID;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) HTSLiveSeriesGiftsInfo *seriesGiftsInfo;

- (void).cxx_destruct;

@end
