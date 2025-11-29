@class NSString, BannerInfo, NSMutableArray, RanklistPaygradeSeatsResponse_Seat;

@interface RanklistPaygradeSeatsResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *stallsArray;
@property (readonly, nonatomic) unsigned long long stallsArray_Count;
@property (retain, nonatomic) RanklistPaygradeSeatsResponse_Seat *ownSeat;
@property (nonatomic) BOOL hasOwnSeat;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long giftId;
@property (nonatomic) int seatsType;
@property (retain, nonatomic) BannerInfo *bannerInfo;
@property (nonatomic) BOOL hasBannerInfo;
@property (nonatomic) long long total;

+ (id)descriptor;

@end
