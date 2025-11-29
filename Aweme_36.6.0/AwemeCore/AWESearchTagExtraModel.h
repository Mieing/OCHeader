@class AWESearchTagExtraStarUrlModel, NSArray;

@interface AWESearchTagExtraModel : AWEBaseApiModel

@property (nonatomic) long long starNewStyle;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *fullColorStarUrl;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *fullNoColorStarUrl;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *halfColorStarUrl;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *scoreIconUrl;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *scoreIconUrlDark;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *backgroundIconUrl;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *backgroundIconUrlDark;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *starsImage;
@property (retain, nonatomic) NSArray *gradientColors;
@property (retain, nonatomic) NSArray *gradientPositions;
@property (nonatomic) double gradientAngle;
@property (nonatomic) double gradientStartPointOffsetLeft;
@property (nonatomic) double gradientEndPointOffsetRight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
