@class NSString, NSMutableArray;

@interface IESLiveMomentUserProfile : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *profileTagContentArray;
@property (readonly, nonatomic) unsigned long long profileTagContentArray_Count;
@property (nonatomic) BOOL isShowDiscussionDegree;
@property (copy, nonatomic) NSString *discussionDegree;
@property (copy, nonatomic) NSString *discussionDegreeScore;
@property (nonatomic) BOOL isShowAnchorSelected;
@property (nonatomic) BOOL isOpenAnchorSelected;

+ (id)descriptor;

@end
