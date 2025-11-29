@class NSString;

@interface IESLivePinCommentVideoParams : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *videoTitle;
@property (copy, nonatomic) NSString *videoCoverUrl;
@property (nonatomic) long long videoItemId;
@property (nonatomic) long long videoItemType;
@property (nonatomic) long long videoSenderRole;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
