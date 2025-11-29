@class NSString;

@interface MMMusicLiveBaseMsg : NSObject

@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned long long msgId;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL bLike;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL isMyPost;
@property (retain, nonatomic) NSString *mvPostNickname;
@property (nonatomic) unsigned long long mvId;
@property (retain, nonatomic) NSString *nonceId;

- (void).cxx_destruct;

@end
