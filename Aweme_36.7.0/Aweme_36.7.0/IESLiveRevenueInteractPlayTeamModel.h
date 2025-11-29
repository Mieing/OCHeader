@class NSNumber, NSString;

@interface IESLiveRevenueInteractPlayTeamModel : NSObject

@property (retain, nonatomic) NSNumber *teamId;
@property (copy, nonatomic) NSString *scoreText;
@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) long long rankIndex;
@property (nonatomic) BOOL isRelativeScoreText;

- (void).cxx_destruct;

@end
