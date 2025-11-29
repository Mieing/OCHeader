@class NSString, UrlStructV2;

@interface GameCommentInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *gameCommentId;
@property (nonatomic) BOOL hasGameCommentId;
@property (nonatomic) int gameCommentScore;
@property (nonatomic) BOOL hasGameCommentScore;
@property (copy, nonatomic) NSString *firstText;
@property (nonatomic) BOOL hasFirstText;
@property (copy, nonatomic) NSString *secondText;
@property (nonatomic) BOOL hasSecondText;
@property (retain, nonatomic) UrlStructV2 *feedStarNotSelectedImage;
@property (nonatomic) BOOL hasFeedStarNotSelectedImage;
@property (retain, nonatomic) UrlStructV2 *feedStarSelectedImage;
@property (nonatomic) BOOL hasFeedStarSelectedImage;
@property (retain, nonatomic) UrlStructV2 *starNoSelectedDarkImage;
@property (nonatomic) BOOL hasStarNoSelectedDarkImage;
@property (retain, nonatomic) UrlStructV2 *starNoSelectedLightImage;
@property (nonatomic) BOOL hasStarNoSelectedLightImage;
@property (retain, nonatomic) UrlStructV2 *starSelectedDarkImage;
@property (nonatomic) BOOL hasStarSelectedDarkImage;
@property (retain, nonatomic) UrlStructV2 *starSelectedLightImage;
@property (nonatomic) BOOL hasStarSelectedLightImage;

+ (id)descriptor;

@end
