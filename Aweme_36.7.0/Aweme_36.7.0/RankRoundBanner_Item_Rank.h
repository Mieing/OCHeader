@class NSString, HTSLiveImage;

@interface RankRoundBanner_Item_Rank : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long rank;

+ (id)descriptor;

@end
