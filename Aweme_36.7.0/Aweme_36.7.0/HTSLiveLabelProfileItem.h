@class NSString, HTSLiveImage;

@interface HTSLiveLabelProfileItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *profilePic;
@property (nonatomic) BOOL hasProfilePic;

+ (id)descriptor;

@end
