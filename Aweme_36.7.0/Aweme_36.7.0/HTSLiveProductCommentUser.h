@class NSString, HTSLiveImage;

@interface HTSLiveProductCommentUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;

+ (id)descriptor;

@end
