@class NSString, HTSLiveImage;

@interface SeasonRankInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) HTSLiveImage *bigBadge;
@property (nonatomic) BOOL hasBigBadge;
@property (retain, nonatomic) HTSLiveImage *smallBadge;
@property (nonatomic) BOOL hasSmallBadge;

+ (id)descriptor;

@end
