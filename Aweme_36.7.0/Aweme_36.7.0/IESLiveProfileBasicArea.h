@class HTSLiveImage;

@interface IESLiveProfileBasicArea : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *gradeIcon;
@property (nonatomic) BOOL hasGradeIcon;
@property (nonatomic) int hasOwnedPublicGroups;

+ (id)descriptor;

@end
