@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenGameCommentInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *gameCommentId;
@property (nonatomic) int gameCommentScore;
@property (copy, nonatomic) NSString *firstText;
@property (copy, nonatomic) NSString *secondText;
@property (retain, nonatomic) AWECodeGenUrlModel *feedStarNotSelectedImageModel;
@property (retain, nonatomic) AWECodeGenUrlModel *feedStarSelectedImageModel;
@property (retain, nonatomic) AWECodeGenUrlModel *starNoSelectedDarkImageModel;
@property (retain, nonatomic) AWECodeGenUrlModel *starNoSelectedLightImageModel;
@property (retain, nonatomic) AWECodeGenUrlModel *starSelectedDarkImageModel;
@property (retain, nonatomic) AWECodeGenUrlModel *starSelectedLightImageModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
