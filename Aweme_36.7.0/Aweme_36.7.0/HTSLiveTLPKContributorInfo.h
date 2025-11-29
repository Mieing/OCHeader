@class NSString, HTSLiveImage;

@interface HTSLiveTLPKContributorInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *idStr;

+ (id)descriptor;

@end
