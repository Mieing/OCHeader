@class NSString, NSDictionary, BDADLiveRoomCardData, NSNumber;
@protocol Ignore, Optional;

@interface BDADLiveRoomCardModel : JSONModel

@property (copy, nonatomic) NSString<Optional> *creativeID;
@property (copy, nonatomic) NSString<Optional> *logExtra;
@property (copy, nonatomic) NSString<Optional> *cardUrl;
@property (copy, nonatomic) NSString *cardUrlV2;
@property (copy, nonatomic) NSDictionary *cardData;
@property (copy, nonatomic) NSString<Optional> *cardUrlV2Lynx;
@property (copy, nonatomic) NSString<Optional> *skanParameters;
@property (copy, nonatomic) NSString<Optional> *appleId;
@property (copy, nonatomic) NSDictionary<Optional> *trackUrlList;
@property (copy, nonatomic) NSDictionary<Ignore> *liveRoomInfo;
@property (retain, nonatomic) BDADLiveRoomCardData<Ignore> *cardDataModel;
@property (retain, nonatomic) NSNumber<Optional> *hide;
@property (nonatomic) long long componentType;
@property (nonatomic) long long cardStyle;
@property (nonatomic) long long cardType;
@property (nonatomic) long long liveCardType;
@property (retain, nonatomic) NSNumber<Optional> *showDuration;
@property (retain, nonatomic) NSNumber<Optional> *showSeconds;
@property (retain, nonatomic) NSNumber<Optional> *internalSeconds;
@property (retain, nonatomic) NSNumber<Optional> *isLiveCommerceFragmentReconstructABTest;
@property (retain, nonatomic) NSNumber<Optional> *liveCardShowTime;
@property (retain, nonatomic) NSNumber<Optional> *liveCardCyclingShow;
@property (copy, nonatomic) NSDictionary<Optional> *liveInfoDic;
@property (copy, nonatomic) NSDictionary<Optional> *adInfoDic;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
