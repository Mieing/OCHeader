@class NSString, NSDictionary, AWEURLModel;

@interface ACCVideoReplyCommentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSString *commentUserId;
@property (copy, nonatomic) NSString *commentAuthorNickname;
@property (copy, nonatomic) AWEURLModel *commentAuthorAvatar;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *commentToCommentId;
@property (copy, nonatomic) NSString *awemeTitle;
@property (copy, nonatomic) AWEURLModel *coverModel;
@property (copy, nonatomic) AWEURLModel *commentSticker;
@property (nonatomic) long long replyType;
@property (copy, nonatomic) NSDictionary *extraCommentParams;
@property (copy, nonatomic) NSString *aliasCommentId;
@property (nonatomic) long long viewType;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL commentDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverModelJSONTransformer;
+ (id)commentAuthorAvatarJSONTransformer;
+ (id)commentStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
