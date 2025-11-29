@class HTSLiveCommon, HTSLiveEntertainmentPaidData;

@interface HTSLiveEntertainmentPaidDataMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveEntertainmentPaidData *entertainmentPaidData;
@property (nonatomic) BOOL hasEntertainmentPaidData;

+ (id)descriptor;

@end
