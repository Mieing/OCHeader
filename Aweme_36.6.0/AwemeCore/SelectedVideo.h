@class NSString, UserBasicInfo;

@interface SelectedVideo : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoDesc;
@property (copy, nonatomic) NSString *videoPostURL;
@property (nonatomic) long long diggCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long publishTime;
@property (retain, nonatomic) UserBasicInfo *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *challengeId;

+ (id)descriptor;

@end
