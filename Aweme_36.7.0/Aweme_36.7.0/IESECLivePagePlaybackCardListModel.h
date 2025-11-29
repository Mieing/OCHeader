@class NSArray, NSNumber;

@interface IESECLivePagePlaybackCardListModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *replayCards;
@property (retain, nonatomic) NSArray *pageTimeStamp;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)replayCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
