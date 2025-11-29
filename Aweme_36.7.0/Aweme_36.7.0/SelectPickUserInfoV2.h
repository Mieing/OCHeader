@class NSString, NSMutableArray;

@interface SelectPickUserInfoV2 : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL hasNickname;
@property (retain, nonatomic) NSMutableArray *userIconURLListArray;
@property (readonly, nonatomic) unsigned long long userIconURLListArray_Count;
@property (copy, nonatomic) NSString *userIconUri;
@property (nonatomic) BOOL hasUserIconUri;

+ (id)descriptor;

@end
