@class NSString, HTSLiveProductCommentUser;

@interface HTSLiveProductComment : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *rate;
@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *diggCount;
@property (nonatomic) int userDigged;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) int anonymous;
@property (retain, nonatomic) HTSLiveProductCommentUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) int isAuthorDigged;
@property (copy, nonatomic) NSString *location;

+ (id)descriptor;

@end
