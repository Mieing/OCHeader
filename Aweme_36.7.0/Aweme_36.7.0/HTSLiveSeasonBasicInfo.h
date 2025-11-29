@class NSString;

@interface HTSLiveSeasonBasicInfo : IESLivePBBaseMessage

@property (nonatomic) int seasonType;
@property (copy, nonatomic) NSString *seasonTitle;

+ (id)descriptor;

@end
