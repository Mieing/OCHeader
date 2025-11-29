@class NSString, HTSLiveImage, GPBInt64ObjectDictionary;

@interface HTSLiveFansclubUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *clubName;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (retain, nonatomic) GPBInt64ObjectDictionary *badge;
@property (readonly, nonatomic) unsigned long long badge_Count;

+ (id)descriptor;

@end
