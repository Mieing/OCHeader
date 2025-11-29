@class NSString, HTSLiveImage, NSMutableArray;

@interface RanklistPaygradeSeatsResponse_Stall : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *stallDesc;
@property (nonatomic) long long stallAudienceNum;
@property (retain, nonatomic) HTSLiveImage *stallBadge;
@property (nonatomic) BOOL hasStallBadge;
@property (retain, nonatomic) NSMutableArray *seatsArray;
@property (readonly, nonatomic) unsigned long long seatsArray_Count;
@property (nonatomic) BOOL online;

+ (id)descriptor;

@end
