@class NSString, NSMutableArray;

@interface HTSLiveHamletAvatar : IESLivePBBaseMessage

@property (nonatomic) long long avatarId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *coverImageURL;
@property (retain, nonatomic) NSMutableArray *expressionListArray;
@property (readonly, nonatomic) unsigned long long expressionListArray_Count;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long expireType;
@property (nonatomic) long long remainTime;

+ (id)descriptor;

@end
