@class NSString;

@interface EntCommentGradeInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *gradeImgURL;
@property (nonatomic) BOOL hasGradeImgURL;
@property (copy, nonatomic) NSString *gradeDesc;
@property (nonatomic) BOOL hasGradeDesc;
@property (copy, nonatomic) NSString *commentId;
@property (nonatomic) BOOL hasCommentId;
@property (copy, nonatomic) NSString *compassId;
@property (nonatomic) BOOL hasCompassId;

+ (id)descriptor;

@end
