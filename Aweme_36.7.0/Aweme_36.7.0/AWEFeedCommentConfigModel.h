@class NSString, AWEFeedCommentBarConfig, AWECommentPictureChallengeConfig, NSNumber;

@interface AWEFeedCommentConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *commentInputConfigText;
@property (nonatomic) BOOL authorChooseShowPartComment;
@property (retain, nonatomic) AWEFeedCommentBarConfig *barConfig;
@property (nonatomic) BOOL showCommentBottomInput;
@property (retain, nonatomic) AWECommentPictureChallengeConfig *pictureChallengeConfig;
@property (retain, nonatomic) NSNumber *commentScreenshotItemId;
@property (copy, nonatomic) NSString *commonFlags;
@property (copy, nonatomic) NSString *commonData;

+ (id)barConfigJSONTransformer;
+ (id)pictureChallengeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
