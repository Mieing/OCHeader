@class NSString, AWEURLModel;

@interface ACCVideoReplyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) AWEURLModel *coverModel;
@property (nonatomic) long long awemeType;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) long long replyType;
@property (copy, nonatomic) AWEURLModel *userAvatarModel;
@property (copy, nonatomic) NSString *playingAwemeId;
@property (copy, nonatomic) NSString *replyId;
@property (copy, nonatomic) NSString *replyToReplyId;
@property (copy, nonatomic) NSString *aliasCommentId;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) long long replyAwemeVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverModelJSONTransformer;
+ (id)userAvatarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
